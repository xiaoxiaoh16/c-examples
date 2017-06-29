/*************************************************************************
    > File Name: exp-2-8.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 15:28:05 2017
 ************************************************************************/

/*
 * Write a C program to get lowest set bit of a number.
 *
 * Example:
 *
 * Input any number: 22
 * 
 * Output first set bit: 1
 *
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8	// Integer size in bits

int main()
{
	int num, order, i;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* Initially set the order to the max size of integer */
	order = INT_SIZE - 1;

	/* Loop over each bit of the integer */
	for(i=0; i<INT_SIZE; i++)
	{
		// If the current bit is set
		if((num>>i) & 1)
		{
			order = i;
			break;
		}
	}
	
	printf("The lowest bit of %d is %d\n", num, order);

	return 0;
}
