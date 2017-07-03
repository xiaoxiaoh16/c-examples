/*************************************************************************
    > File Name: exp-4-1.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:08:40 2017
 ************************************************************************/

/*
 * Write a C program to find maximum between two numbers.
 * 
 * Example
 *
 * Input
 * Input num1: 10
 * Input num2: 20
 * 
 * Output
 * Maximum = 20
 *
 */

#include <stdio.h>

int main()
{
	int num1, num2;

	//read two numbers from user
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);

	//compare num1 with num2
	if(num1 > num2)
		printf("Maximum between %d and %d is %d\n", num1, num2, num1);
	else	
		printf("Maximum between %d and %d is %d\n", num1, num2, num2);

	return 0;
}
