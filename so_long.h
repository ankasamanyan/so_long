/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:46:25 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/20 15:46:37 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "Libft/libft.h"
# include "mlx/mlx.h"

typedef struct
{
	char	**map_arr;
	size_t	column;
	size_t	row;
	
}	map;

typedef struct so_long
{
	map	map_thingy;
}		t_vars;

void	get_the_map(char *file, map *map_thingy);
void	check_shape(map	*map_thingy);
void	check_chars(map *mapi);
void	run_checks(map *map_thingy);

#endif