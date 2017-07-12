/*************************************************************************
    > File Name: exp-6-22.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul 10 14:58:27 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and print all factors of the number.
 *
 * Example
 *
 * Input
 * Input number: 
 * 
 * Output
 * Factors of 12: 1, 2, 3, 4, 6, 12
 *
 */

#include <stdio.h>

int main()
{
	int num, i, factor;

	// Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("All factors of %d is:", num);

	for(i=1; i<=num; i++)
	{
		if((num%i) == 0)
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return 0;
}
