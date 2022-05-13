/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:31:12 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/25 20:21:50 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	get_the_map(char *file, map *map_thingy)
{
	char	*map_row;
	int		rowlen;
	int		fd;
	int		i;

	i = 0;
	fd = open(file, O_RDONLY);
	map_row = get_next_line(fd);
	rowlen = ft_strlen(map_row);
	map_thingy->column = rowlen - 1;
	while (get_next_line(fd))
		map_thingy->row = i++ + 1;
	map_thingy->map_arr = ft_calloc(map_thingy->row, sizeof(char *));
	fd = open(file, O_RDONLY);
	map_row = get_next_line(fd);
	if (map_row[rowlen - 1] == '\n')
		map_row[rowlen - 1] = '\0';
	i = 0;
	while (map_row)
	{
		if (map_row[rowlen - 1] == '\n')
			map_row[rowlen - 1] = '\0';
		map_thingy->map_arr[i++] = map_row;
		map_row = get_next_line(fd);
	}
}

void	check_shape(map	*map_thingy)
{
	int	i;

	i = 0;
	while (i < map_thingy->row)
	{
		if (ft_strlen(map_thingy->map_arr[i]) != map_thingy->column)
		{
			ft_printf("Error\nInvalid map! The map has to be rectangular!");
			break ;
		}
		if (map_thingy->map_arr[i][0] != '1'
			|| map_thingy->map_arr[i][map_thingy->column - 1] != '1')
		{
			ft_printf("Error\nMissing wall in the map!");
			break ;
		}
		i++;
	}
}

void	check_walls(map *map_thingy)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map_thingy->row)
	{
		while (j < map_thingy->column)
		{
			if ((map_thingy->map_arr[0][j] != '1')
				|| (map_thingy->map_arr[map_thingy->row][j] != '1'))
			{
				ft_printf("Error\nMissing wall in map!");
				i = -1;
				break ;
			}
			j++;
		}
		if (i == -1)
			break ;
		i++;
	}
}

void	check_chars(map *mapi)
{
	int		i;
	int		j;

	i = 0;
	i = 0;
	while (i < mapi->row)
	{
		while (j < mapi->column)
		{
			if ((mapi->map_arr[i][j] != '1') && (mapi->map_arr[i][j] != '0')
				&& (mapi->map_arr[i][j] != 'P') && (mapi->map_arr[i][j] != 'C')
				&& (mapi->map_arr[i][j] != 'E'))
			{
				ft_printf("Error\nWrong character in the map!");
				i = -1;
				break ;
			}
			j++;
		}
		if (i == -1)
			break ;
		i++;
	}
}

void	run_checks(map *map_thingy)
{
	check_chars(map_thingy);
	check_shape(map_thingy);
	check_walls(map_thingy);
}