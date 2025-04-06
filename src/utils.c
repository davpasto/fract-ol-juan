/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 04:03:06 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:45:37 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	exit_fractal(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx, fractal->image);
	mlx_destroy_window(fractal->mlx, fractal->window);
	free(fractal->mlx);
	free(fractal);
	exit(1);
	return (0);
}

void	put_color_to_pixel(t_fractal *fractal, int x, int y, int color)
{
	char	*buff;

	if (x < 0 || x >= SIZE || y < 0 || y >= SIZE)
		return ;
	buff = fractal->img_addr + (y * fractal->line_size + x *
			(fractal->bits / 8));
	*(unsigned int *)dst = color;
}
