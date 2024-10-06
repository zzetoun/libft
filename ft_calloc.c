/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzetoun <zzetoun@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:37:59 by zzetoun           #+#    #+#             */
/*   Updated: 2024/07/03 19:50:37 by zzetoun          ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t counter, size_t size)
{
	void	*ptr;

	if (size && counter > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(size * counter);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, counter * size);
	return (ptr);
}
