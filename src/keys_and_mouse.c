/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_and_mouse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 02:55:30 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:39:08 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

void	zoom(t_fractal *fractal, int x, int y, int zoom)
{
	double	zoom_level;
	double	px;
	double	py;
	
	px = (double)x / fractal->zoom + fractal->offset_x;
	py = (double)y / fractal->zoom + fractal->offset_y;
	zoom_level = 1.42;
	if (zoom == 1)
	{
		fractal->zoom *= zoom_level;
	}
	else if (zoom == -1)
	{
		fractal->zoom /= zoom_level;
	}
	else
		return ;
	fractal->offset_x = px - (double)x / fractal->zoom;
	fractal->offset_y = py - (double)y / fractal->zoom;

}

int	key_hook(int key_code, t_fractal *fractal)
{
	if (key_code == ESC)
		exit_fractal(fractal);
	return (0);
}

int	mouse_hook(int mouse_code, int x, int y, t_fractal *fractal)
{
	if (mouse_code == SCROLL_UP)
		zoom(fractal, x, y, 1);
	else if (mouse_code == SCROLL_DOWN)
		zoom(fractal, x, y, -1);
	selector(fractal, fractal->name);
	return (0);
}

