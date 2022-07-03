#include "piano.h"

bool is_c_key(int x, int y, t_piano *data)
{
	if (x > 0 && x < 86)
		return (true);
	else
		return (false);
}

bool is_db_key(int x, int y, t_piano *data)
{
	if (x > 53 && x < 105 && y < 302)
		return (true);
	else
		return (false);
}

bool is_d_key(int x, int y, t_piano *data)
{
	if (x > 89 && x < 171)
		return (true);
	else
		return (false);
}

bool is_eb_key(int x, int y, t_piano *data)
{
	if (x > 155 && x < 207 && y < 302)
		return (true);
	else
		return (false);
}

bool is_e_key(int x, int y, t_piano *data)
{
	if (x > 172 && x < 258)
		return (true);
	else
		return (false);
}

bool is_f_key(int x, int y, t_piano *data)
{
	if (x > 259 && x < 343)
		return (true);
	else
		return (false);
}

bool is_gb_key(int x, int y, t_piano *data)
{
	if (x > 305 && x < 359 && y < 302)
		return (true);
	else
		return (false);
}

bool is_g_key(int x, int y, t_piano *data)
{
	if (x > 344 && x < 428)
		return (true);
	else
		return (false);
}

bool is_ab_key(int x, int y, t_piano *data)
{
	if (x > 401 && x < 456 && y < 302)
		return (true);
	else
		return (false);
}

bool is_a_key(int x, int y, t_piano *data)
{
	if (x > 429 && x < 514)
		return (true);
	else
		return (false);
}

bool is_b_key(int x, int y, t_piano *data)
{
	if (x > 516 && x < 600)
		return (true);
	else
		return (false);
}

bool is_bb_key(int x, int y, t_piano *data)
{
	if (x > 500 && x < 555 && y < 302)
		return (true);
	else
		return (false);
}