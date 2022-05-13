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

	if (argc < 2 || argc > 2)
		return (ft_printf("Wrong number of arguments!"));
	get_the_map(argv[1], &vars.map_thingy);
	run_checks(&vars.map_thingy);
	return (0);
}
