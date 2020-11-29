#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[24];
	char str2[24];
	int i;

	int n;

	/* Example 1 */
	sprintf(str, "Hello World!");
	printf("%s\n", str);

	/* Example 2 */
	i = 4;
	sprintf(str, "Value of i = %d", i);
	printf("%s\n", str);

	/* Example 3 */
	/* $ man strlen */
	n = strlen(str);
	printf("String length = %d\n", n);

	/* Example 4 */
	/* $ man strcpy */
	strcpy(str2, str);
	printf("str2 is: %s\n", str2);

	/* Eample 5 */
	/* $ man memset */
	memset(str, 0, 24);
	memset(str, 'a', 10);
	printf(">%s<\n", str);

	return 0;
}
