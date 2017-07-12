/*************************************************************************
    > File Name: exp-6-5.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jul  6 17:07:54 2017
 ************************************************************************/

/*
 * Write a C program to print all odd number between 1 to 100.
 *
 * Example
 *
 * Input
 * Input upper limit: 10
 * 
 * Output
 * Odd numbers between 1 to 10:
 * 1, 3, 5, 7, 9
 *
 */

#include <stdio.h>

int main()
{
	int i, n;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("All odd number between 1 to %d\n", n);

	for(i=1; i<=n; i+=2)
	{
		printf("%d\n", i);
	}
	
	return 0;
}
