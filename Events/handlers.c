/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:45:42 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:45:46 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		ft_putstr_fd(GREEN"Program basarili bir sekilde kapatildi...\n", 1);
		exit(0);
	}
	move_player(data, keysym);
	return (0);
}

int	handle_btnx(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	ft_putstr_fd(GREEN"Program basarili bir sekilde kapatildi...\n", 1);
	exit(0);
	return (0);
}
