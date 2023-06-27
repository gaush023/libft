/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:39:32 by sagemura          #+#    #+#             */
/*   Updated: 2023/06/27 16:21:14 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int argument)
{
	if ((argument >= 'A') && (argument <= 'Z'))
		return ((argument + 32));
	else
		return (argument);
}
