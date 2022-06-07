/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:46:08 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:46:12 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

int	init_window(t_data *data)
{
	data->mlx = mlx_init();
	if (data->mlx == NULL)
		return (ERROR);
	data->win = mlx_new_window(data->mlx, data->win_width,
			data->win_height, "SO_LONG");
	if (data->win == NULL)
	{
		free(data->win);
		return (ERROR);
	}
	return (SUCCESS);
}

void	init_images(t_data *data)
{
	data->img.wall = mlx_xpm_file_to_image(data->mlx, IMG_WALL,
			&data->img.width, &data->img.height);
	data->img.ground = mlx_xpm_file_to_image(data->mlx, IMG_GROUND,
			&data->img.width, &data->img.height);
	data->img.player = mlx_xpm_file_to_image(data->mlx, IMG_PLAYER,
			&data->img.width, &data->img.height);
	data->img.exit = mlx_xpm_file_to_image(data->mlx, IMG_EXIT,
			&data->img.width, &data->img.height);
	data->img.coin = mlx_xpm_file_to_image(data->mlx, IMG_COIN,
			&data->img.width, &data->img.height);
}

void	loop_images(t_data data)
{
	mlx_loop_hook(data.mlx, &render, &data);
	mlx_hook(data.win, 2, 1L << 0, &handle_keypress, &data);
	mlx_hook(data.win, 17, 0L, &handle_btnx, &data);
	mlx_loop(data.mlx);
}

void	destroy_images(t_data *data)
{
	mlx_destroy_image(data->mlx, data->img.wall);
	mlx_destroy_image(data->mlx, data->img.ground);
	mlx_destroy_image(data->mlx, data->img.player);
	mlx_destroy_image(data->mlx, data->img.exit);
	mlx_destroy_image(data->mlx, data->img.coin);
}
