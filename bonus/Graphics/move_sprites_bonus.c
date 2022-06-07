/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sprites_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:22:58 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 16:22:59 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

void	coin_sprite_bonus(t_data *data, int i, int j, int k)
{
	if (!k % 4)
		mlx_put_image_to_window(data->mlx, data->win, data->img.coin1,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (k % 4 == 1)
		mlx_put_image_to_window(data->mlx, data->win, data->img.coin2,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (k % 4 == 2)
		mlx_put_image_to_window(data->mlx, data->win, data->img.coin3,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (k % 4 == 3)
		mlx_put_image_to_window(data->mlx, data->win, data->img.coin4,
			j * IMG_SIZE, i * IMG_SIZE);
	else
		mlx_put_image_to_window(data->mlx, data->win, data->img.coin5,
			j * IMG_SIZE, i * IMG_SIZE);
}
