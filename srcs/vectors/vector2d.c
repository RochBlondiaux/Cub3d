/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:40:31 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 19:40:31 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

t_v2d	v2f(double x, double y)
{
	t_v2d	v;

	v.x = x;
	v.y = y;
	return (v);
}

void	add_v2f(t_v2d *v, double x, double y)
{
	v->x += x;
	v->y += y;
}

void	sub_v2f(t_v2d *v, double x, double y)
{
	v->x -= x;
	v->y -= y;
}

void	mul_v2f(t_v2d *v, double x, double y)
{
	v->x *= x;
	v->y *= y;
}

void	div_v2f(t_v2d *v, double x, double y)
{
	v.x /= x;
	v.y /= y;
}
