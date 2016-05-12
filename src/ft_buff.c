/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:36:02 by ademenet          #+#    #+#             */
/*   Updated: 2016/05/12 12:41:13 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdlib.h>
#include <string.h>

/*
** Those functions are used as in library. They are different string
** manipulation functions used further in buffer creation and memory
** reallocation.
*/

char		*ft_strset(char *s1, char fill, int len)
{
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = fill;
		i++;
	}
	return (s1);
}

char		*ft_strcat(char *s1, char *s2)
{
	int		i;
	int 	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char		*ft_strcpy(char *dst, char *src)
{
	char	*pdst;

	pdst = dst;
	while (*src)
		*pdst++ = *src++;
	*pdst = '\0';
	return (dst);
}

char		*ft_strnew(int size)
{
	char		*text;

	text = (char *)malloc((size + 1) * sizeof(char));
	if (!text)
		return (NULL);
	while (size >= 0)
		text[size--] = '\0';
	return (text);
}

char		*ft_strjoin(char *s1, char *s2)
{
	char	*strjoin;

	if (!s1)
		return (NULL);
	strjoin = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!strjoin)
		return (NULL);
	ft_strcpy(strjoin, s1);
	ft_strcat(strjoin, s2);
	return (strjoin);
}

char			*ft_filling(char **buf, char c, int nb)
{
	char		*strtmp1;
	char		*strtmp2;
	char		*str;

	strtmp1 = ft_strnew(nb);
	strtmp2 = *buf;
	str = ft_strjoin(ft_strset(strtmp1, c, nb), strtmp2);
	free(strtmp1);
	free(strtmp2);
	return (str);
}

char			*ft_insert(char **buf, char *s)
{
	char		*strtmp1;
	char		*str;

	strtmp1 = *buf;
	str = ft_strjoin(strtmp1, s);
	free(strtmp1);
	return (str);
}

char			*ft_buff(char **buf, char *s, int nb)
{
	char		*str;

	if (nb > 0)
		str = ft_filling(buf, s[0], nb);
	// else if (nb == 0 && s[0] == '\0')
	// 	// mettre f->ret++
	else if (nb == -1)
		str = ft_insert(buf, s);
	return(str);
}
