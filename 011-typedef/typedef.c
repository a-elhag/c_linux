#include <stdio.h>

typedef int INT32;
typedef char MYCHR;

typedef struct mystruct_t {
	int a;
	int b;
	double c;
} MYSTRX;

int main(int argc, char *argv[])
{
	INT32 int_howdy = 2;
	MYCHR mystr[20] = "Hello World";

	MYSTRX gold;

	gold.a = 2;
	gold.b = 4;
	gold.c = 91.1;

	printf("i = %d\n", int_howdy);
	printf("mystr = %s\n", mystr);

	printf("gold.a = %d, gold.b = %d, gold.c = %0.1f\n",
			gold.a, gold.b, gold.c);


	return 0;
}
