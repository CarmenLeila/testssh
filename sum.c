#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	int  i = 0;
	int sum = 0;

	printf("argc or ac = %d\n", ac);
	while (av[i] != NULL)
	{
		printf("Argument[%d] : %s\n", i, av[i]);
		sum += atoi(av[i]);
		i++;
	}
	printf("sum is %d\n", sum);
	return (0);
}
