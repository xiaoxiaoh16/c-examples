/*************************************************************************
    > File Name: exp-5-4.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul  5 10:54:00 2017
 ************************************************************************/

/*
 * Write a C program to find maximum between two numbers using switch case.
 * 
 * Example
 *
 * Input
 * Input first number: 12
 * Input second number: 40
 * 
 * Output
 * Maximum: 40
 *
 */

#include <stdio.h>

int main()
{
	int num1, num2;

	// read two numbers from user
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);

	/* the condition num1 > num2 will return either 0 or 1. warning: switch condition has boolean value [-Wswitch-bool] */
	switch(num1 > num2)
	{
		case 0:
			{
				printf("%d is the maximum\n", num2);
				break;
			}
		case 1:
			{
				printf("%d is the maximum\n", num1);
				break;
			}
	}

	return 0;
}
