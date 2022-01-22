/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:06:12 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 20:35:36 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	stop(t_app *app)
{
	mlx_destroy_image(app->mlx, app->window.image.img);
	mlx_destroy_window(app->mlx, app->window.window);
}
