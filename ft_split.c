/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaidour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:30:22 by ahaidour          #+#    #+#             */
/*   Updated: 2022/10/31 00:28:11 by ahaidour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_words(char const *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] != c && j)
		{
			j = 0;
			len++;
		}
		if (s[i] == c)
			j = 1;
		i++;
	}
	return (len);
}

static int	words_length(char const *s, char c, int *i)
{
	int	len;

	len = 0;
	while (s[*i])
	{
		if (s[*i] == c)
		{
			break ;
		}
		(*i)++;
		len++;
	}
	return (len);
}

static void	*str_free(char ***str, int j)
{
	int		i;
	char	**p;

	p = *str;
	i = 0;
	if (!p[j])
	{
		while (j >= 0)
		{
			free(p[j]);
			j--;
		}
		free(p);
		return (0);
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**strs;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	strs = malloc((number_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		strs[j] = ft_substr(s, i, words_length(s, c, &i));
		if (!str_free(&strs, j))
			return (NULL);
		j++;
	}
	strs[j] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "---hello-world-1337---";
// 	for (size_t i = 0; i < 3; i++)
// 	{
// 		printf("%s\n", ft_split(str, '-')[i]);
// 	}
// }
