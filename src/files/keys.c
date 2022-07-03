#include "piano.h"


void	keyboard(int x, int y, t_piano *data)
{
	if (is_db_key(x, y, data))
	{
		printf("C#  ");
		ma_engine_play_sound(&data->engine, "./resources/sounds/Db.mp3", NULL);
	}
	else if (is_eb_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/Eb.mp3", NULL);
		printf("D#  ");
	}
	else if (is_gb_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/Gb.mp3", NULL);
		printf("F#  ");
	}
	else if (is_ab_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/Ab.mp3", NULL);
		printf("G#  ");
	}
	else if (is_bb_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/Bb.mp3", NULL);
		printf("A#  ");
	}
	else if (is_c_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/C.mp3", NULL);
		printf("C  ");
	}
	else if (is_d_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/D.mp3", NULL);
		printf("D  ");
	}
	else if (is_e_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/E.mp3", NULL);
		printf("E  ");
	}
	else if (is_f_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/F.mp3", NULL);
		printf("F  ");
	}
	else if (is_g_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/G.mp3", NULL);
		printf("G  ");
	}
	else if (is_a_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/A.mp3", NULL);
		printf("A  ");
	}
	else if (is_b_key(x, y, data))
	{
		ma_engine_play_sound(&data->engine, "./resources/sounds/B.mp3", NULL);
		printf("B  ");
	}
}

int hello_mouse(int keycode, int x, int y, t_piano *data)
{
	keyboard(x, y, data);
	printf("%d %d %d\n", x, y, keycode);
	return (0);
}