/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaidour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:56:19 by ahaidour          #+#    #+#             */
/*   Updated: 2022/10/31 12:16:56 by ahaidour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	q = (char *)dst;
	p = (char *)src;
	if (p == NULL && q == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		q[i] = p[i];
		i++;
	}
	return (q);
}
