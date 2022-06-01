/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:32:58 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/06/01 15:42:45 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	x_close(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
}

int	key_handler(int keycode, t_data *data)
{
	// printf("%d this is kezcode\n", keycode);
	if (keycode == K_ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		exit(0);
	}
	if (keycode == 'a')
		;
	return (0);
}

void	print_2d_array(char	**arr, int fd)
{
	int	i;

	i = 0;
	if (arr)
	{
		while (arr[i] != NULL)
		{
			ft_putstr_fd(arr[i], fd);
			if (arr[i][ft_strlen(arr[i]) - 1] != '\n')
				ft_putchar_fd('\n', fd);
			i++;
		}
	}
}


int	main(int argc, char *argv[])
{
	t_vars	vars;
	// void	*mlx;
	void	*img;
	// void	*mlx_win;
	char	*img_path = "./doggo.xpm";
	int		width = 150;
	int		height = 150;
	int		win_width = 1920;
	int		win_height = 1080;
	t_data	data;

	data.mlx = mlx_init();
	// void	*mlx_win;
	if (argc < 2 || argc > 2)
		return (ft_printf("Wrong number of arguments!"));
	get_the_map(argv[1], &vars.map_thingy);
	print_2d_array(vars.map_thingy.map_arr, 1);
	run_checks(&vars.map_thingy);
	data.win = mlx_new_window(data.mlx, win_width, win_height, "Hello world!");
	img = mlx_xpm_file_to_image(data.mlx, img_path, &width, &height);
	mlx_put_image_to_window(data.mlx, data.win, img, 0, 0);
	// mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	// img = mlx_new_image(data.mlx, 1920, 1080);
	// img = mlx_new_image(data.mlx, 1920, 1080);

	mlx_hook(data.win, ON_DESTROY, 0, x_close, &data);
	mlx_hook(data.win, ON_KEYDOWN, 0, key_handler, &data);
	mlx_loop(data.mlx);
}
