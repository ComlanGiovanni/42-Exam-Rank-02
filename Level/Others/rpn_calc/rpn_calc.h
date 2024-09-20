#include "rpn_calc.h"

int	is_op(int c)
{
	return (c == '+' ||
			c == '-' ||
			c == '*' ||
			c == '/' ||
			c == '%');
}

int	is_digit(int c)
{
	return ('0' <= c && c <= '9');
}

int	is_space(int c)
{
	return (c == 32);
}