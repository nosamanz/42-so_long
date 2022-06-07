/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 18:47:36 by oozcan            #+#    #+#             */
/*   Updated: 2022/05/27 18:47:41 by oozcan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc == 2)
	{
		if (name_check(argv[1]) == FAILURE)
			error_msg(ERRBER, &data);
		create_map(argv[1], &data);
		init_map(&data);
		check_map(&data);
		f_init_player(&data);
		init_window(&data);
		init_images(&data);
		loop_images(data);
		destroy_images(&data);
		ft_free(&data);
	}
	else
		error_msg2(ARGERR);
}
