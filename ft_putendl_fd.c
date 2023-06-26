/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:49:44 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/25 08:41:22 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	new_line;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	new_line = '\n';
	write(fd, &new_line, 1);
}
