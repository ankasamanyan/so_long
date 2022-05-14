/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:32:58 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/04/20 15:43:35 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_vars	vars;
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	if (argc < 2 || argc > 2)
		return (ft_printf("Wrong number of arguments!"));
	get_the_map(argv[1], &vars.map_thingy);
	run_checks(&vars.map_thingy);
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	mlx_loop(mlx);
}
