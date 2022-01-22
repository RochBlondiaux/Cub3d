/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:39:51 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 19:47:17 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

/**
 * Libraries
 */
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <math.h>
# include <mlx.h>

# include "messages.h"

/**
 * Structures
 */

typedef struct s_v2d {
	double	x;
	double	y;
} 			t_v2d;

typedef struct s_v3d {
	double	x;
	double	y;
	double	z;
} 			t_v3d;

/**
 * 3D Vector
 */
t_v3d	v3f(int x, int y, int z);
void	add_v3f(t_v3d *v, int x, int y, int z);
void	sub_v3f(t_v3d *v, int x, int y, int z);
void	mul_v3f(t_v3d *v, int x, int y, int z);
void	div_v3f(t_v3d *v, int x, int y, int z);

/**
 * 2D Vector
 */
t_v2d	v2d(double x, double y);
void	add_v2d(t_v2d *v, double x, double y);
void	sub_v2d(t_v2d *v, double x, double y);
void	mul_v2d(t_v2d *v, double x, double y);
void	div_v2d(t_v2d *v, double x, double y);

/**
 * Parsing
 */

/**
 * Utils
 */

#endif