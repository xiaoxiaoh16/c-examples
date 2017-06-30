/*************************************************************************
    > File Name: exp-3-1.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 08:50:44 2017
 ************************************************************************/

/*
 * Write a C program to find maximum between two numbers using conditional/ternary operator.
 * 
 * Example:
 *
 * Input first number: 10
 * Input second number: 20
 * 
 * Output maximum: 20
 *
 */

#include <stdio.h>

int main()
{
	int num1, num2, max;

	/* Read two number from user */
	printf("Enter two numbers one by one: ");
	scanf("%d%d", &num1, &num2);
	
	max = (num1 > num2)? num1: num2;

	printf("Maximum beween %d and %d is %d\n", num1, num2, max);

	return 0;

}
