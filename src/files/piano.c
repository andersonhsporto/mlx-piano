#include "piano.h"

int main (void)
{
	t_piano piano;

	piano_init(&piano);
	piano.result = ma_engine_init(NULL, &piano.engine);
	mlx_put_image_to_window(piano.mlx, piano.win, piano.img_data.ptr, 0, 0);
	mlx_hook(piano.win, 2, 1L << 0, piano_esc, &piano);
	mlx_hook(piano.win, 17, 1L << 2, piano_close, &piano);
	mlx_mouse_hook(piano.win, hello_mouse, &piano);
	mlx_loop(piano.mlx);
	ma_engine_uninit(&piano.engine);
	return (0);
}