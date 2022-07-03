#include "piano.h"

void	init_img(t_piano *data, char *path)
{
	data->img_data.ptr = mlx_xpm_file_to_image(data->mlx, path, &data->img_data.x, &data->img_data.y);
}

void	piano_init(t_piano *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WIDTH, HEIGHT, "Piano");
	data->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	data->data = mlx_get_data_addr(data->img, &data->bpp, &data->size_line, &data->endian);
	data->x = 0;
	data->y = 0;
	data->width = WIDTH;
	data->height = HEIGHT;
	data->color = 0xFFFFFF;
	init_img(data, "./resources/keys.xpm");
}