/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:46:19 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:46:21 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

void	map_char(t_data *data, int i, int j)
{
	if (data->map.map[i][j] == '1')
		mlx_put_image_to_window(data->mlx, data->win, data->img.wall,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (data->map.map[i][j] == '0')
		mlx_put_image_to_window(data->mlx, data->win, data->img.ground,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (data->map.map[i][j] == 'P')
		mlx_put_image_to_window(data->mlx, data->win, data->img.player,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (data->map.map[i][j] == 'E')
		mlx_put_image_to_window(data->mlx, data->win, data->img.exit,
			j * IMG_SIZE, i * IMG_SIZE);
	else if (data->map.map[i][j] == 'C')
		mlx_put_image_to_window(data->mlx, data->win, data->img.coin,
			j * IMG_SIZE, i * IMG_SIZE);
}

int	render(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->map.map[i])
	{
		while (data->map.map[i][j] != '\0' && data->map.map[i][j] != '\n')
		{
			map_char(data, i, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (SUCCESS);
}
