/*************************************************************************
    > File Name: exp-2-13.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jun 29 16:04:19 2017
 ************************************************************************/

/*
 * Write a C program to convert decimal to binary number system using bitwise operator.
 *
 * Example:
 *
 * Input any number: 22
 *
 * Output binary number: 00000000000000000000000000010110 (in 4 byte integer representation) 
 *
 */

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8	// Integer size of bits

int main()
{
	int num, index, i;
	int bin[INT_SIZE];

	/* Read a number from user */
	printf("Enter a number: ");
	scanf("%d", &num);

	index = INT_SIZE;

	while(index > 0)
	{
		index--;

		//store 1 if LSB is set, otherwise 0
		bin[index]= num &1;

		//shift bit of num to one position right
		num >>= 1;
	}

	/* print the converted binary */
	printf("Coverted binary (in %lu type integer representation): ", sizeof(int));

	for(i=0; i<INT_SIZE; i++)
	{
		printf("%d", bin[i]);
	}
	printf("\n");

	return 0;

}
