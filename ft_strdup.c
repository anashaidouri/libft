/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaidour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:50:02 by ahaidour          #+#    #+#             */
/*   Updated: 2022/10/23 22:46:44 by ahaidour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p != NULL)
	{
		i = 0;
		while (i < len)
		{
			p[i] = s[i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
/*int main()
{
    //char str[] = "Foo Bar Baz";
    char *tmp = "this is a normal test";
    char *ptr;
    ptr = ft_strdup(tmp);
    printf("%s\n", ptr);
    //printf("%s", strdup(str));
}*/
