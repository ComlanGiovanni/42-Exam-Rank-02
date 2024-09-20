#include "ordalph.h"
#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 2)
		ord_alphlong(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
