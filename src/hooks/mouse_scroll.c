/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_scroll.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyan <jiyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:56:00 by jiyawang          #+#    #+#             */
/*   Updated: 2026/03/03 19:21:23 by jiyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

static void	fov_zoom(t_context *ctx, double ydelta)
{
	ctx->scene.camera.fov -= (int)ydelta * 2;
	if (ctx->scene.camera.fov < 1)
		ctx->scene.camera.fov = 1;
	if (ctx->scene.camera.fov > 179)
		ctx->scene.camera.fov = 179;
	ctx->needs_rerender = true;
	ctx->last_input_time = mlx_get_time();
	render_scene(ctx->img, ctx->scene, 6);
}

void	scroll_hook(double xdelta, double ydelta, void *param)
{
	t_context	*ctx;

	(void)xdelta;
	ctx = (t_context *)param;
	if (!ctx)
		return ;
	fov_zoom(ctx, ydelta);
}
