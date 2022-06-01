/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:46:25 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/05/30 18:41:15 by akasaman         ###   ########.fr       */
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

enum {
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_MOUSEDOWN = 4,
	ON_MOUSEUP = 5,
	ON_MOUSEMOVE = 6,
	ON_EXPOSE = 12,
	ON_DESTROY = 17
};

enum
{
	K_A = 0,
	K_S = 1,
	K_D = 2,
	K_W = 13,
	K_ESC = 53,
	K_LEFT = 123,
	K_RIGHT = 124,
	K_DOWN = 125,
	K_UP = 126
};


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

typedef struct s_data
{
	void	*mlx;
	void	*win;
}	t_data;

void	get_the_map(char *file, map *map_thingy);
void	check_shape(map	*map_thingy);
void	check_chars(map *mapi);
void	run_checks(map *map_thingy);

#endif