/*************************************************************************
    > File Name: exp-6-20.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 16:07:38 2017
 ************************************************************************/

/*
 * Write a C program to print all ASCII character with their values.
 *
 * Example
 *
 * Input
 *
 * Output
 * ASCII value of character   = 0
 * ASCII value of character ☺ = 1
 * ...
 * ...
 * ASCII value of character ■ = 254
 * ASCII value of character   = 255
 *
 */

#include <stdio.h>

int main()
{
	int i;
	
	// how to print ASCII value big than 127, "?"
	for(i=0; i<=255; i++)
	{
		printf("ASCII value of character %c = %d\n", i, i);
	}

	return 0;
}
