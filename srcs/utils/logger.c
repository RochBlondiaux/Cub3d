/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outputs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:33:06 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 21:36:08 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	info(char *a)
{
	ft_putstr_fd(a, 0);
	ft_putchar_fd('\n', 0);
}

void	error(char *a)
{
	ft_putstr_fd(a, 1);
	ft_putchar_fd('\n', 1);
}
