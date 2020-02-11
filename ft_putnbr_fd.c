/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:44:51 by agianico          #+#    #+#             */
/*   Updated: 2019/11/09 10:59:06 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	j;
	char		num;

	j = n;
	if (j < 0)
	{
		write(fd, "-", 1);
		j = j * -1;
	}
	if (j >= 10)
		ft_putnbr_fd(j / 10, fd);
	num = j % 10 + '0';
	write(fd, &num, 1);
}
