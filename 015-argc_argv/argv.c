#include <stdio.h>

/* $ ./argv hello 1 2 3 */

int main(int argc, char *argv[])
{
	int i;

	for (i=0; i<argc; i++){
		printf("argv[%d] =  %s\n", i, argv[i]);
	}

	return 0;
}
