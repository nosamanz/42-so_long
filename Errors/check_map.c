/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:48:40 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:48:42 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/so_long.h"

int	check_chars(t_data *data)
{
	while (data->map.map[data->i])
	{
		while (data->map.map[data->i][data->j])
		{
			if (data->map.map[data->i][data->j] == 'P')
				data->map.count_p++;
			else if (data->map.map[data->i][data->j] == 'E')
				data->map.count_e++;
			else if (data->map.map[data->i][data->j] == 'C')
				data->map.count_c++;
			data->j++;
		}
		data->j = 0;
		data->i++;
	}
	if (!data->map.count_c || !data->map.count_e || !data->map.count_p)
		return (FAILURE);
	else
		return (SUCCESS);
}

int	check_top_bot(int row, char **map)
{
	int	i;

	i = 0;
	while (map[row][i] && map[row][i] != '\n')
	{
		if (map[row][i] != '1')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int	check_edges(int line_count, char **map)
{
	int	i;

	i = 1;
	if (check_top_bot(0, map) == FAILURE
		|| check_top_bot (line_count, map) == FAILURE)
		return (FAILURE);
	while (i < line_count)
	{
		if (map[i][0] != '1' || map[i][ft_strlen(map[0]) - 2] != '1')
			return (FAILURE);
		i++;
	}
	return (SUCCESS);
}

int	check_rectangle(t_data *data)
{
	int		i;

	i = 0;
	data->map.line_len = ft_strlen(data->map.map[i]) - 1;
	if (data->map.line_count == data->map.line_len)
		return (FAILURE);
	return (SUCCESS);
}

int	check_map(t_data *data)
{
	int					i;
	unsigned long int	j;

	i = 0;
	j = 0;
	while (data->map.map[i])
	{	
		while (j < ft_strlen(data->map.map[i]) - 1)
		{
			if (ft_strchr("01CEP", data->map.map[i][j]) == NULL)
				error_msg(ERROTHER, data);
			j++;
		}
		j = 0;
		i++;
	}
	if (check_chars(data) == FAILURE)
		error_msg(ERRCHARS, data);
	if (data->map.count_p > 1)
		error_msg(ERRPLAYER, data);
	if (check_rectangle(data) == FAILURE)
		error_msg(ERRREC, data);
	if (check_edges(data->map.line_count - 1, data->map.map) == FAILURE)
		error_msg(ERREDGES, data);
	return (SUCCESS);
}
