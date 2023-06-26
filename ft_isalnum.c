/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:14:48 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/26 19:47:27 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int argument)
{
	return (((argument >= 'a') && (argument <= 'z')) || ((argument >= '0')
			&& (argument <= '9')) || ((argument >= 'A') && (argument <= 'Z')));
}
