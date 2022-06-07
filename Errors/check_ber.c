/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:48:31 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:48:33 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

int	name_check(char *str)
{
	str = ft_strchr(str, '.');
	if (!str)
		return (FAILURE);
	if (ft_strnstr(str, ".ber", 4))
		return (SUCCESS);
	return (FAILURE);
}
