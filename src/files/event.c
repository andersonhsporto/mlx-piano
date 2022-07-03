#include "piano.h"

int	piano_esc(int keycode, t_piano *data)
{
	if (keycode == 53 || keycode == 65307)
	{
		ma_engine_uninit(&data->engine);
		exit(0);
	}
	return (0);
}

int	piano_close(t_piano *data)
{
	ma_engine_uninit(&data->engine);
	exit(0);
	return (0);
}
