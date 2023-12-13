#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	int  i = 0;

	printf("argc or ac = %d\n", ac);
	while (av[i] != NULL)
	{
		printf("Argument %d: %s\n", i, av[i]);
		i++;
	}
		return (0);
}
