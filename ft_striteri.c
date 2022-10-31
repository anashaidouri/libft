/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaidour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:58:37 by ahaidour          #+#    #+#             */
/*   Updated: 2022/10/31 13:12:07 by ahaidour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void add(unsigned int i, char *c) {
	*c = (char)(i + *c);
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
		i++;
		}
	}
}
int main()
{
	char t[] = "anas";
	ft_striteri (t, add);
	puts(t);
}
