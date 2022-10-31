/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaidour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:35:11 by ahaidour          #+#    #+#             */
/*   Updated: 2022/10/31 12:56:07 by ahaidour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// int	main(void)
// {
// 	int		fd;
// 	char	s[10];

// 	fd = open("tripouille", O_RDWR | O_CREAT);
// 	ft_putstr_fd((char *)"42", fd);
// 	s[10] = {0};
// 	read(fd, s, 3);
// 	write(1, "\n", 1);
// 	return (0);
// }
