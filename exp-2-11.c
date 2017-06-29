/*************************************************************************
    > File Name: exp-2-11.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jun 29 14:42:43 2017
 ************************************************************************/

/*
 * Write a C program to flip bits of a binary number using bitwise operator.
 *
 * Example:
 *
 * Input any number: 22
 * 
 * Output number after bits are flipped: -23 (in decimal) 
 *
 */

#include <stdio.h>

int main()
{
	int num, flippedNum;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);
	
	flippedNum = ~num;

	printf("The flip bit of the number %d is %d.\n", num, flippedNum);

	return 0;
}
