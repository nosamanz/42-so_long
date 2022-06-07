/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sprites_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:22:21 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 16:22:23 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

void	exit_sprite_bonus(t_data *data, int i, int j)
{
	if (data->map.can_exit == 0)
		mlx_put_image_to_window(data->mlx, data->win, data->img.exit_l,
			j * IMG_SIZE, i * IMG_SIZE);
	else
		mlx_put_image_to_window(data->mlx, data->win, data->img.exit_u,
			j * IMG_SIZE, i * IMG_SIZE);
}

void	init_coin_bonus(t_data *data)
{
	data->img.coin1 = mlx_xpm_file_to_image(data->mlx, COIN1,
			&data->img.width, &data->img.height);
	data->img.coin2 = mlx_xpm_file_to_image(data->mlx, COIN2,
			&data->img.width, &data->img.height);
	data->img.coin3 = mlx_xpm_file_to_image(data->mlx, COIN3,
			&data->img.width, &data->img.height);
	data->img.coin4 = mlx_xpm_file_to_image(data->mlx, COIN4,
			&data->img.width, &data->img.height);
	data->img.coin5 = mlx_xpm_file_to_image(data->mlx, COIN5,
			&data->img.width, &data->img.height);
}
