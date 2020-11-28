#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 10;

	do {
		printf("i = %d\n", i);
		i++;
	} while (i <5);

	printf("i = %d\n", i);

	return 0;
}
