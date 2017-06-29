/*************************************************************************
    > File Name: exp-2-1.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 09:50:27 2017
 ************************************************************************/

/*
 * Write a C program to check Least Significant Bit (LSB) of a number is set or not.
 *
 * Example:
 *
 * Input number: 11
 *
 * Output: Least Significant Bit of 11 is set (1). 
 *
 */

#include <stdio.h>

int main()
{
	int num;

	/* read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* if (num &1) evaluates to 1, the LSB is 1, else LSB is 0 */
	if(num & 1)
		printf("Least significant bit(LSB) of %d is set(1).\n", num);
	else
		printf("Least significant bit(LSB) of %d is set(0).\n", num);

	return 0;
}
