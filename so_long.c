/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:45:13 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/15 14:14:25 by ankasamanya      ###   ########.fr       */
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

	i = 0;
	j = 0;
	map_row = NULL;
	map = NULL;
	if (argc < 2 || argc > 2)
	{
		ft_printf("Wrong number of arguments!");
		return 0;
	}
	fd = open(argv[1], O_RDONLY);
	
	// while ()
	// {	
	// 	// if (map_row == NULL)
	// 	// 	break;
	// 	map[i] = get_next_line(fd);
	// 	ft_printf("%s", map[i++]);
	// }
	return 0;
}
