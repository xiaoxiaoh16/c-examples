/*************************************************************************
    > File Name: exp-2-2.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 10:00:24 2017
 ************************************************************************/

/*
 * Write a C program to check Most Significant Bit (MSB) of a number is set or not.
 *
 * Example:
 *
 * Input number: -1
 *
 * Output: Most Significant Bit (MSB) of -1 is set (1).
 *
 */

#include <stdio.h>
#define INT_SIZE sizeof(int)	//since size is machine dependent

int main()
{
	int num, msb;

	/* read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* move the first bit set of 1 to the highest order*/
	msb = 1 << (INT_SIZE * 8 - 1);

	/* if (num & msb) evaluates to 1, else evaluates to 0 */
	if(num & msb)
		printf("Most significant bit(MSB) of %d is set(1).\n", num);
	else
		printf("Most significant bit(MSB) of %d is set(0).\n", num);

	return 0;
}

