/*************************************************************************
    > File Name: exp-2-15.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jun 29 16:12:04 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is even or odd using bitwise operator.
 *
 * Example: 
 *
 * Input number: 12
 *
 * Output: 12 is even.
 *
 */

#include <stdio.h>

int main()
{
	int num;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	(num & 1)? printf("%d is odd.\n", num):printf("%d is even.\n", num);

	return 0;
}
