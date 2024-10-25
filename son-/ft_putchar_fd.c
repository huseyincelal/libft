/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:53:11 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/25 15:32:23 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"//

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
