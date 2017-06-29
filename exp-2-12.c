/*************************************************************************
    > File Name: exp-2-12.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jun 29 15:51:21 2017
 ************************************************************************/

/*
 * Write a C program to total number of zeros and ones in a binary number.
 *
 * Example: 
 *
 * Input any number: 22 
 * 
 * Output number of one's: 3 (in 4 byte integer representation) 
 * Output number of zero's: 29 (in 4 byte integer representation) 
 *
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8	//Integer size of bits

int main()
{
	int num, zeros, ones, temp, i;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);
	
	temp = num;
	zeros = 0;
	ones = 0;

	for(i=0; i<INT_SIZE; i++)
	{
		// If SLB is set then increment ones, otherwise increment zeros
		if(temp & 1)
			ones++;
		else 
			zeros++;
		//right shift bits of temp to one position
		temp >>= 1;
	}

	printf("The total number of zeros and ones in %d is %d and %d.\n", num, zeros, ones);

	return 0;

}
