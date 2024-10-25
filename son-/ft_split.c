/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:53:22 by hugozlu           #+#    #+#             */
/*   Updated: 2024/10/21 08:03:48 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	freeclear(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (strs[i])
			free(strs[i]);
		i++;
	}
	free(strs);
}

static char	*nextwordcont(char	**s, char c)
{
	size_t	l;

	while (**s && **s == c)
		*s = *s + 1;
	l = 0;
	while ((*s)[l] && (*s)[l] != c)
		l++;
	if (l == 0)
		return (0);
	*s += l;
	return (ft_substr((const char *) *s - l, 0, l));
}

char	**ft_split(char const *s, char c)
{
	int		strsize;
	int		i;
	char	**strs;
	char	*str;

	str = (char *) s;
	strsize = wordcount((char *) s, c) + 1;
	strs = (char **) malloc(sizeof(char *) * strsize);
	if (!strs)
		return (0);
	i = 0;
	while (i < strsize)
	{
		strs[i] = nextwordcont(&str, c);
		if (!strs[i] && i != strsize - 1)
		{
			freeclear(strs, i);
			return (0);
		}
		i++;
	}
	return (strs);
}
