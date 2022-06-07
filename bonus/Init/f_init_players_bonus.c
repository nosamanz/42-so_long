/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_init_players_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:40:25 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 16:40:27 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

void	f_init_players_bonus(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->map.map[i])
	{
		while (data->map.map[i][j])
		{
			if (data->map.map[i][j] == 'P')
			{
				data->p_i = i;
				data->p_j = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
