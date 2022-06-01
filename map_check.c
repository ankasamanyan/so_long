/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:31:12 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/06/01 20:37:21 by akasaman         ###   ########.fr       */
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
	while ( get_next_line(fd))
		map_thingy->row = i++ + 1;
	map_thingy->map_arr = ft_calloc(map_thingy->row, sizeof(char *));
	close(fd);
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
			write(2,"Error\nInvalid map! The map has to be rectangular!\n", 50);
			break ;
		}
		if (map_thingy->map_arr[i][0] != '1'
			|| map_thingy->map_arr[i][map_thingy->column - 1] != '1')
		{
			write(2, "Error\nMissing wall in the map!\n", 31);
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
	while (i < map_thingy->row)
	{
		j = 0;
		while (j < map_thingy->column)
		{
			if ((map_thingy->map_arr[0][j] != '1')
				|| (map_thingy->map_arr[map_thingy->row][j] != '1'))
			{
				write(2, "Error\nHalp!\n", 13);
				printf("%d\n",j);
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
	while (i < mapi->row)
	{
		j = 0;
		while (j < mapi->column)
		{
			if (mapi->map_arr[i][j] != '1'&& mapi->map_arr[i][j] != '0'
				&& mapi->map_arr[i][j] != 'P' && mapi->map_arr[i][j] != 'C'
				&& mapi->map_arr[i][j] != 'E')
			{
				write(2, "Error\nWrong character in the map!\n", 34);
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
