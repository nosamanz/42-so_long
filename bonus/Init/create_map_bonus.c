/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:40:15 by oozcan            #+#    #+#             */
/*   Updated: 2022/06/05 16:40:17 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/so_long_bonus.h"

void	ft_free_bonus(t_data *data)
{
	free(data->map.map);
	free(data->mlx);
	free(data->win);
	return ;
}

int	line_count_bonus(char *mappath)
{
	int		fd;
	char	*line;
	int		line_count;

	line_count = 0;
	fd = open(mappath, O_RDONLY);
	if (fd < 0)
		printf("\e[31mHATA: DOSYA ACILAMADI!\e[0m\n");
	else
	{
		line = get_next_line(fd);
		while (line != NULL)
		{
			line_count++;
			free(line);
			line = get_next_line(fd);
		}
		close(fd);
	}
	return (line_count);
}

void	put_input_in_map(int row, int column, int i, t_data *data)
{
	char	*line;

	line = get_next_line(data->map.fd);
	while (line != NULL)
	{
		data->map.map[row] = ft_calloc(ft_strlen(line) + 1, sizeof(char));
		if (!data->map.map[row])
			return (ft_free_bonus(data));
		while (line[i] != '\0')
			data->map.map[row][column++] = line[i++];
		data->map.map[row++][column] = '\0';
		column = 0;
		i = 0;
		free(line);
		line = get_next_line(data->map.fd);
		write(1, &data->map.map[row][column], 1);
	}
	data->map.map[row] = NULL;
}

void	create_map_bonus(char *mappath, t_data *data)
{
	int	column;
	int	row;
	int	i;	

	column = 0;
	row = 0;
	i = 0;
	data->map.line_count = line_count_bonus(mappath);
	data->map.path = mappath;
	data->map.map = ft_calloc(data->map.line_count + 1, sizeof(char *));
	if (!(data->map.map))
		return ;
	data->map.fd = open(mappath, O_RDONLY);
	if (data->map.fd < 0)
		printf("\e[31mHATA: MAP DOSYASI ACILAMADI!e[0m\n");
	else
	{
		put_input_in_map(row, column, i, data);
		close(data->map.fd);
	}
}
