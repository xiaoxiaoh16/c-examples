/*************************************************************************
    > File Name: exp-2-3.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 10:26:57 2017
 ************************************************************************/

/*
 * Write a C program to get nth bit of a number.
 * 
 * Example:
 *
 * Input number: 12
 * Input nth bit number: 2
 *
 * Output: 2 bit of 12 is set (1). 
 *
 */

#include <stdio.h>

int main()
{
	int num, n, bitstatus;

	/* read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* Input the bit number you want to check */
	printf("Enter nth bit to check (0-31): ");
	scanf("%d", &n);

	/* Shift bits to right n times and ANDing with 1 */
	bitstatus = (num >> n ) & 1;

	printf("The %dth bit of %d is set to %d\n", n, num, bitstatus);

	return 0;
}
