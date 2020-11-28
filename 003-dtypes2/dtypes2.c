#include <stdio.h>

int main(int argc, char *argv[])
{
	int myint;
	char mychar;

	long int mylongint;

	float myfloat;
	double mydouble;

	myint = 5;
	mychar = 'r';

	mylongint = 10;

	myfloat = 24.3;
	mydouble = 24.3;

	printf("size of int = %ld\n", sizeof(int));
	printf("size of int = %ld\n", sizeof(myint));

	printf("size of char = %ld\n", sizeof(char));
	printf("size of char = %ld\n", sizeof(mychar));

	printf("size of longint = %ld\n", sizeof(long int));
	printf("size of longint = %ld\n", sizeof(mylongint));

	printf("size of float = %ld\n", sizeof(float));
	printf("size of float = %ld\n", sizeof(myfloat));

	printf("size of double = %ld\n", sizeof(double));
	printf("size of double = %ld\n", sizeof(mydouble));

	return 0;
}
