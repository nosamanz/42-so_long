/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:57:15 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 15:57:18 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

int	name_check_bonus(char *str)
{
	str = ft_strchr(str, '.');
	if (!str)
		return (FAILURE);
	if (ft_strnstr(str, ".ber", 4))
		return (SUCCESS);
	return (FAILURE);
}
