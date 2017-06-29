/*************************************************************************
    > File Name: exp-2-9.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jun 28 15:40:22 2017
 ************************************************************************/

/*
 * Write a C program to count trailing zeros in a binary number.
 *
 * Example: 
 *
 * Input any number: 48
 * 
 * Output trailing zeros: 4
 *
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8	//Integer size in bits 

int main()
{
	int num, i, count=0;

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	/* Iterate over each bit of the number */
	for(i=0; i<INT_SIZE; i++)
	{
		//if a set is found, then break
		if((num >> i) & 1)
			break;	//no need to run further
		count++;
	}


	/*
	 * method 2:
	 * while(!(num & 1))
	 *	{
	 *		num = num >> 1;
	 *		count++;
	 *	}
	 */

	printf("The count trainling zeros of bits in %d is %d.\n", num, count);

	return 0;
}
