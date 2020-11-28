#include <stdio.h>

/* This is the source for adding two 
   numbers and returns the sum. It is 
   for C programming in Linux. 
*/

/* This function adds two numbers */
/* it returns the sum             */

int add_numbers(int a, int b)
{
	int sum; /* variable to take the sum

	/* add the numbers */
	sum = a+b;

	/* return the sum */
	return sum;
}

/* This is my main function */

int main(int argc, char *argv[])
{
	int result;

	/* Define pointer function */
	int (*myfunc_ptr)(int, int);

	/* Set pointer function to add_numbers */
	myfunc_ptr = &add_numbers;

	result = myfunc_ptr(3, 8);

	printf("result = %d\n", result);

	return 0;
}
