/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:40:31 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 19:50:36 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

t_v3d	v3f(double x, double y, double z)
{
	t_v3d	v;

	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

void	add_v3f(t_v3d *v, double x, double y, double z)
{
	v->x += x;
	v->y += y;
	v->z += z;
}

void	sub_v3f(t_v3d *v, double x, double y, double z)
{
	v->x -= x;
	v->y -= y;
	v->z -= z;
}

void	mul_v3f(t_v3d *v, double x, double y, double z)
{
	v->x *= x;
	v->y *= y;
	v->z *= z;
}

void	div_v3f(t_v3d *v, double x, double y, double z)
{
	v->x /= x;
	v->y /= y;
	v->z /= z;
}