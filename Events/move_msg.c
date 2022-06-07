/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:45:24 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:45:26 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

void	move_msg(t_data *data)
{
	ft_putstr_fd("\e[1;1H\e[2J", 1);
	ft_putstr_fd("\033[38;5;217m", 1);
	printf("Hareket Sayaci : %d\n", data->steps_count);
}
