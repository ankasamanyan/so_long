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
	void	*img;
<<<<<<< HEAD
	void	*mlx_win;
	char	*img_path = "./doggo.xpm";
	int		width = 150;
	int		height = 150;
	int		win_width = 1920;
	int		win_height = 1080;

	mlx = mlx_init();
=======
	// void	*mlx_win;
>>>>>>> c95166550e5ce3d465f904cdcb0e3b6126c49255

	mlx = mlx_init();
	if (argc < 2 || argc > 2)
		return (ft_printf("Wrong number of arguments!"));
	get_the_map(argv[1], &vars.map_thingy);
	run_checks(&vars.map_thingy);
<<<<<<< HEAD
	mlx_win = mlx_new_window(mlx, win_width, win_height, "Hello world!");
	img = mlx_xpm_file_to_image(mlx, img_path, &width, &height);
	mlx_put_image_to_window(mlx, mlx_win, img, 0, 0);
=======
	// mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img = mlx_new_image(mlx, 1920, 1080);
>>>>>>> c95166550e5ce3d465f904cdcb0e3b6126c49255
	mlx_loop(mlx);
}
