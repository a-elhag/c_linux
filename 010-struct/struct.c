#include <stdio.h>

int main(int argc, char *argv[])
{
	struct {
		int myint1;
		float myfloat;
		int myint2;
	} myst;

	myst.myint1 = 4;
	myst.myfloat = 3.2;
	myst.myint2 = 9;

	printf("myint1 = %d, myfloat = %0.2f, myint2 = %d\n", myst.myint1,
			myst.myfloat, myst.myint2);

	return 0;
}
