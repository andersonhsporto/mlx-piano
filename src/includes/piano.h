#ifndef PIANO_H
# define PIANO_H

#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include "miniaudio.h"

#define WIDTH 447
#define HEIGHT 600

typedef struct s_img
{
	void	*ptr;
	int		*pixels;
	int		line_size;
	int		mem;
	int		x;
	int		y;
}	t_img;

typedef struct s_piano
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*data;
	int		bpp;
	int		size_line;
	int		endian;
	int		x;
	int		y;
	int		width;
	int		height;
	int		color;
	t_img	img_data;
	ma_result result;
    ma_engine engine;
}			t_piano;


void	init_img(t_piano *data, char *path);
void	piano_init(t_piano *data);

int		piano_esc(int keycode, t_piano *data);
int		piano_close(t_piano *data);

int hello_mouse(int keycode, int x, int y, t_piano *data);

bool is_c_key(int x, int y, t_piano *data);
bool is_db_key(int x, int y, t_piano *data);
bool is_d_key(int x, int y, t_piano *data);
bool is_eb_key(int x, int y, t_piano *data);
bool is_e_key(int x, int y, t_piano *data);
bool is_f_key(int x, int y, t_piano *data);
bool is_gb_key(int x, int y, t_piano *data);
bool is_g_key(int x, int y, t_piano *data);
bool is_ab_key(int x, int y, t_piano *data);
bool is_a_key(int x, int y, t_piano *data);
bool is_b_key(int x, int y, t_piano *data);
bool is_bb_key(int x, int y, t_piano *data);

#endif