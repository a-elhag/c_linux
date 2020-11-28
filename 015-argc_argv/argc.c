#include <stdio.h>

/* argc counts the number of arguments given when running the C-function
 * it starts of at 1 (for the original)
 * ./argc ==> argc = 1
 * ./argc hello ==> argc = 2
 * ./argc hello world hey there ==> argc = 5
 */
int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);

	return 0;
}
