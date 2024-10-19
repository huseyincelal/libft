/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:53:37 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/18 16:24:58 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	h;

	h = 0;
	if (dstsize > 0)
	{
		while (h < (dstsize - 1) && src[h])
		{
			dst[h] = src[h];
			h++;
		}
		dst[h] = '\0';
	}
	while (src[h])
		h++;
	return (h);
}
