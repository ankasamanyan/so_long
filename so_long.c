/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:45:13 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/16 21:29:10 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char const *argv[])
{
	char	*map_row;
	char	**map;
	int 	fd;
	int		i;
	int		j;
	size_t	columns;
	size_t	rows;

	i = 1;
	j = 0;
	map_row = NULL;
	// map = NULL;
	if (argc < 2 || argc > 2)
	{
		ft_printf("Wrong number of arguments!");
		return 0;
	}
	fd = open(argv[1], O_RDONLY);
	//get the column count
	columns = ft_strlen(get_next_line(fd)) - 1;
	// ft_printf("%i\n", columns);
	
	//get the row count
	while (get_next_line(fd))
		rows = i++ + 1;
	// ft_printf("%i\n", rows);

	//creating 2d array for the map
	map = ft_calloc(rows, sizeof(char *));
	fd = open(argv[1], O_RDONLY);
	map_row = get_next_line(fd);
	i = 0;
	while (map_row)
	{
		map[i] = map_row;
		map_row = get_next_line(fd);
		ft_printf("%s",map[i++]);
	}
	
	ft_printf("\n");
	//check if the map is rectangular and surrounded by walls
	i = 0;
	while (i < rows)
	{
		// ft_printf("%i\n",(ft_strlen(map[i]) - 1));
		
		// check if the map is rectangular
		if ((ft_strlen(map[i]) - 1) != columns)
			return (ft_printf("Error\nInvalid map!"));
		//check if the map is surrounded by walls
		if (map[i][0] != '1' || map[i][columns - 1] != '1') 
			return (ft_printf("Error\nMissing wall in map!"));
		while (j < columns)
		{
			if (map[0][j] != '1' || map[rows - 1][j++] != '1')
				return (ft_printf("Error\nMissing wall in map!"));
		}
		i++;
	}

	return 0;
}
