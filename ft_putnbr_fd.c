/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:11:26 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/25 08:41:25 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;
	int		i;

	ptr = ft_itoa(n);
	i = 0;
	while (ptr[i])
	{
		write(fd, &ptr[i], 1);
		i++;
	}
}
