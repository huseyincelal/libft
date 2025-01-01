/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:53:32 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/19 16:18:57 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		i;
	char	*add;

	if (!s1 || !s2)
		return (NULL);
	add = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!add)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		add[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		add[i] = s2[j];
		j++;
		i++;
	}
	add[i] = '\0';
	return (add);
}
