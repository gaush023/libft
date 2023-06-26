/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:56:34 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/25 08:41:15 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*uc_str1;
	unsigned const char	*uc_str2;

	i = 0;
	uc_str1 = (unsigned char *)str1;
	uc_str2 = (unsigned const char *)str2;
	if (uc_str1 < uc_str2)
	{
		while (i < n)
		{
			uc_str1[i] = uc_str2[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			uc_str1[n] = uc_str2[n];
		}
	}
	return (uc_str1);
}
