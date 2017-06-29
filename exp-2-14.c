/*************************************************************************
    > File Name: exp-2-14.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jun 29 16:09:08 2017
 ************************************************************************/

/*
 * Write a C program to swap two numbers using bitwise operator
 *
 * Example: 
 *
 * Input first number: 22
 * Input second number: 65
 *
 * Output first number after swapping: 65
 * Output second number after swapping: 22
 *
 */

#include <stdio.h>

int main()
{
	int num1, num2;

	/* Read two number from user */
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);

	printf("The original num1 and num2 are %d, %d\n", num1, num2);

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2; 
	
	printf("After swapping, num1 and num2 are %d, %d\n", num1, num2);

	return 0;

}
