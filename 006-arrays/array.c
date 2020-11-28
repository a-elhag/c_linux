#include <stdio.h>

int main(int argc, char *argv[])
{
	int a[4];
	int b[4] = {2,6,3,8};

	a[0] = 3;
	a[1] = 5;
	a[2] = -7;
	a[3] = 12;

	printf("Array a: %d, %d, %d, %d\n", a[0], a[1], a[2], a[3]);
	printf("Array b: %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);

	return 0;
}
