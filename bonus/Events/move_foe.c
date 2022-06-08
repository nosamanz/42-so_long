/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_foe.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:58:24 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 15:58:26 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

void	foe_move(t_data *data, int i, int j)
{
	if (data->map.map[i][j + 1] == 'P')
	{
		ft_putstr_fd(RED"-GAME OVER-\n", 1);
		ft_free_bonus(data);
		exit(0);
	}
	if (data->map.map[i][j + 1] != '1')
	{
		data->map.map[i][j + 1] = 'F';
		data->map.map[i][j] = '0';
	}
}

void	foe_move2(t_data *data, int i, int j)
{
	while (data->map.map[i][j - 1] != '1')
	{
		if (data->map.map[i][j - 1] == 'E')
			break ;
		j--;
	}
	if (data->map.map[i][j] == 'P')
	{
		ft_putstr_fd(RED"-GAME OVER-\n", 1);
		ft_free_bonus(data);
		exit(0);
	}
	data->map.map[i][j] = 'F';
}

void	foe(t_data *data, int i, int j)
{
	data->d = 0;
	if (data->map.map[i][j + 1] != '1' &&
			data->map.map[i][j + 1] != 'C')
	{
		foe_move(data, i, j);
	}
	if (data->map.map[i][j + 1] == '1' ||
			data->map.map[i][j + 1] == 'C')
	{
		data->map.map[i][j] = '0';
		foe_move2(data, i, j);
	}
}
