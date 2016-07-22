#include <stdio.h>

void printsizeof()
{
	printf("The bytes of the variables are:\n");
	printf("int: %zubytes.\n",sizeof(int));
	printf("char: %zubytes.\n",sizeof(char));
	printf("short: %zubytes\n",sizeof(short));
	printf("long: %zubytes\n",sizeof(long));
	printf("float: %zubytes\n",sizeof(float));
	printf("long double: %zubytes\n",sizeof(long double));
}
