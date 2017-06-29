/*************************************************************************
    > File Name: exp-2-7.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 15:06:41 2017
 ************************************************************************/

/*
 * Write a C program to get highest set bit of a number.
 *
 * Example:
 *
 * Input any number: 22
 *
 * Output: Highest order set bit in 22 is 4. 
 *
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8	//Integer size in bits

int main()
{
	int num, order, i;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* loop over each bit of the integer */
	for(i=0; i<INT_SIZE; i++)
	{
		// If the current bit is set
		if((num >> i) & 1)
			order = i;
	}

	printf("Highest order set bit in %d is %d \n", num, order);

	return 0;
}
