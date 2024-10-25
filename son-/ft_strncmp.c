/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:53:44 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/21 08:09:59 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*h1;
	unsigned char	*h2;

	h1 = (unsigned char *)s1;
	h2 = (unsigned char *)s2;
	while (n && *h1 && *h1 == *h2)
	{
		h1++;
		h2++;
		n--;
	}
	if (n)
		return (*h1 - *h2);
	else
		return (0);
}
