/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:06:12 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 20:34:10 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

static t_image	init_image(void *mlx)
{
	t_image	image;

	image.img = mlx_new_image(mlx, WIDTH, HEIGHT);
	image.address = mlx_get_data_addr(image.img, &image.bpp,
			&image.line_length, &image.endian);
	return (image);
}

static t_window	init_window(void *mlx)
{
	t_window	window;

	window.height = HEIGHT;
	window.width = WIDTH;
	window.title = TITLE;
	window.window = mlx_new_window(mlx, window.width,
			window.height, window.title);
	window.image = init_image(mlx);
	return (window);
}

void	init(t_app *app)
{
	app->mlx = mlx_init();
	app->window = init_window(app->mlx);
}
