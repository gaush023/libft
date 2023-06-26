/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:15:01 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/25 08:42:11 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*temp;

	temp = NULL;
	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			temp = (char *)&str[i];
		i++;
	}
	if (c == '\0')
		temp = (char *)&str[i];
	return (temp);
}
