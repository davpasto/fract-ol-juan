/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpasto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 00:15:34 by davpasto          #+#    #+#             */
/*   Updated: 2025/04/02 04:47:03 by davpasto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	main(int ac, char **av)
{
	t_fractal	*fractal;

	if (ac != 2)
	{
		ft_putendl_fd("Avaliable use: ./fractol <fractal>", 1);
		ft_putendl_fd("Fractal = mandelbrot, julia", 1);
		return (0);
	}
	fractal = malloc(sizeof(t_fractal));
	init_fractal(fractal);
	init_mlx(fractal);
	mlx_key_hook(fractal->window, key_hook, fractal);
	mlx_mouse_hook(fractal->window, mouse_hook, fractal);
	selector(fractal, av[1]);
	mlx_loop(fractal->mlx);
	return (0);
}

int	selector(t_fractal *fractal, char *str)
{
	if (ft_strncmp(str, "mandel", 7) == 0)
		draw_mandelbrot(fractal);
	else if (ft_strncmp(str, "julia", 6) == 0)
	{
		fractal->offset_x = -1.0;
		fractal->offset_y = -1.0;
		fractal->zoom = 200;
		fractal->cx = -0.745429;
		fractal->cy = 0.05;
		draw_julia(fractal);
	}
	else
	{
		ft_putendl_fd("Fractals: mandelbrot, julia", 1);
		exit_fractal(fractal);
	}
	mlx_put_image_to_window(fractal->mlx, fractal->window, fractal->image, 0,
	0);
	return (0);
}
