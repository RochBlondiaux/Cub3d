/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:39:51 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 21:53:45 by rblondia         ###   ########.fr       */
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
# include "../libft/libft.h"

# include "settings.h"
# include "messages.h"

/**
 * Structures
 */
typedef struct s_image {
	void	*img;
	char	*address;
	int		bpp;
	int		line_length;
	int		endian;
	int		width;
	int		height;
}			t_image;

typedef struct s_window {
	void	*window;
	char	*title;
	int		width;
	int		height;
	t_image	image;
}			t_window;

enum e_direction {
	NORTH,
	SOUTH,
	EAST,
	WEST,
};

enum e_type {
	WALL,
	FLOOR,
	VOID
};

typedef struct s_tile
{
	t_v2d	location;
	e_type	type;
}		t_tile;

typedef struct s_texture
{
	e_direction	face;
	char		*path;
}	t_texture;

typedef struct s_app {
	t_window	window;
	void		*mlx;
	t_texture	**textures;
	s_tile		**tiles;
}				t_app;

typedef struct s_v2d {
	double	x;
	double	y;
}			t_v2d;

typedef struct s_v3d {
	double	x;
	double	y;
	double	z;
}			t_v3d;

/**
 * Applications
 */
void	init(t_app *app);
void	start(t_app *app);
void	stop(t_app *app);

/**
 * Parsing
 */
void	parse(t_app *app, char **args, int size);
void	validate_arguments(int count);

/**
 * Graphics
 */

/**
 * 3D Vector
 */
t_v3d	v3f(double x, double y, double z);
void	add_v3f(t_v3d *v, double x, double y, double z);
void	sub_v3f(t_v3d *v, double x, double y, double z);
void	mul_v3f(t_v3d *v, double x, double y, double z);
void	div_v3f(t_v3d *v, double x, double y, double z);

/**
 * 2D Vector
 */
t_v2d	v2d(double x, double y);
void	add_v2d(t_v2d *v, double x, double y);
void	sub_v2d(t_v2d *v, double x, double y);
void	mul_v2d(t_v2d *v, double x, double y);
void	div_v2d(t_v2d *v, double x, double y);

/**
 * Utils
 */
void	error(char *a);
void	info(char *a);

#endif