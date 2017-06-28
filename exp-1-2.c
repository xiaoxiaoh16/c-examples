/*************************************************************************
    > File Name: exp-1-2.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jun 26 15:35:20 2017
 ************************************************************************/

/*
 * Write a C program to enter two numbers and perform all arithmetic operations.
 *
 * Example
 *
 * Input
 *	First number: 10
 *	Second number: 5
 *
 * Output
 * Sum = 15
 * Difference = 5
 * Product = 50
 * Quotient = 2
 * Modulus = 0
 */

#include <stdio.h>

int main()
{
	int num1, num2;
	int sum, sub, mult, div, mod;
	/* read two numbers from user*/
	printf("Enter any two numbers:");
	scanf("%d%d", &num1, &num2);

	/* performs all arithmetic operations*/
	sum = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = (float)num1 /num2;
	mod = num1 %num2;

	/* print all the result of all arithmetic operations*/
	printf("sum = %d\n", sum);
	printf("difference = %d\n", sub);
	printf("product = %d\n", mult);
	printf("quotient = %d\n", div);
	printf("modules = %d\n",mod);
	
	return 0;
}
