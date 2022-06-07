/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:57:42 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 15:57:44 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

void	error_msg_bonus(char *str, t_data *data)
{
	ft_putstr_fd(RED, 2);
	ft_putstr_fd("Error\n", 2);
	ft_putstr_fd(str, 2);
	if (data->map.map)
		ft_free_bonus(data);
	exit(1);
}

void	error_msg2_bonus(char *str)
{
	printf("\033[1;36m%s\n", str);
}
