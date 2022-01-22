/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondia <rblondia@student.42-lyon.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:22:36 by rblondia          #+#    #+#             */
/*   Updated: 2022/01/22 21:34:46 by rblondia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	validate_arguments(int count)
{
	if (count < 2)
	{
		error(MISSING_ARGUMENT);
		exit(EXIT_FAILURE);
	}
	if (count > 2)
	{
		error(TOO_MANY_ARGUMENT);
		exit(EXIT_FAILURE);
	}
}
