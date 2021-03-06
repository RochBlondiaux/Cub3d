/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:39:33 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 21:31:05 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

static void	launch(t_app *app)
{
	init(app);
	start(app);
	stop(app);
}

int	main(int argc, char **argv)
{
	t_app	app;

	parse(&app, argv, argc);
	launch(&app);
	return (EXIT_SUCCESS);
}
