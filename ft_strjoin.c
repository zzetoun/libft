/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzetoun <zzetoun@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 13:33:40 by zzetoun           #+#    #+#             */
/*   Updated: 2024/07/06 14:38:30 by zzetoun          ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	int		idx;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	idx = -1;
	while (s1[++idx])
		str[idx] = s1[idx];
	idx = 0;
	while (s2[idx])
	{
		str[len1] = s2[idx];
		idx++;
		len1++;
	}
	str[len1] = '\0';
	return (str);
}
