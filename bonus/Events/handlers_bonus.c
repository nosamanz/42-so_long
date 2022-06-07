/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:58:16 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 15:58:18 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

int	handle_keypress_bonus(int keysym, t_data *data)
{
	if (keysym == ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		ft_putstr_fd(GREEN"Program basarili bir sekilde kapatildi...\n", 1);
		exit(0);
	}
	else
		move_player_bonus(data, keysym);
	return (0);
}

int	handle_btnx_bonus(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	ft_putstr_fd(GREEN"Program basarili bir sekilde kapatildi...\n", 1);
	exit(0);
	return (0);
}
