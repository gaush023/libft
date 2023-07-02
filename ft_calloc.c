/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:26:51 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/01 17:33:32 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (nitems && size > SIZE_MAX / nitems)
		return (NULL);
	else if (size * nitems == 0)
	{
		size = 1;
		nitems = 1;
	}
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * nitems);
	return (ptr);
}
