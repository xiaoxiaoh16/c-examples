/*************************************************************************
    > File Name: exp-1-1.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 15:18:39 2017
 ************************************************************************/

/*
 * Write a C program to enter two numbers and find their sum.
 *
 * Example
 *
 * Input
 *	Input first number: 20 
 *	Input second number: 10
 *
 * Output
 * Sum = 30
 */


#include <stdio.h>

int main()
{
	int num1, num2, sum;
	/* read two numbers from user */
	printf("Enter any two numbers: ");
	scanf("%d%d",&num1, &num2);

	sum=num1+num2;

	/* print the sum of the two numbers*/
	printf("Sum of %d and %d = %d\n",num1, num2, sum);
	return 0;
}



