/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:52:16 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/25 13:32:39 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"//

void	*ft_calloc(size_t count, size_t size)
{
	void	*cll;

	cll = malloc(size * count);
	if (!cll)
		return (0);
	ft_bzero(cll, size * count);
	return (cll);
}
