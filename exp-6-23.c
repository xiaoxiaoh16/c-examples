/*************************************************************************
    > File Name: exp-6-23.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul 10 15:45:45 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and calculate its factorial.
 *
 * Example
 *
 * Input
 * Input number: 5
 * 
 * Output
 * Factorial: 120
 *
 */

#include <stdio.h>

int main()
{
	int i, num;
	long long fact=1;

	printf("Enter a number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		fact *= i;
	}

	printf("Calculate its factorial is %lld\n", fact);

	return 0;
}
