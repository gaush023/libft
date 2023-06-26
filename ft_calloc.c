/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:26:51 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/25 08:01:54 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	if (size && nitems > SIZE_MAX / size)
		return (NULL);
	p = malloc(nitems * size);
	if (p == 0)
		return (p);
	ft_bzero(p, nitems * size);
	return (p);
}
