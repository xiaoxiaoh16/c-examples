/*************************************************************************
    > File Name: exp-4-3.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:28:14 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is negative, positive or zero.
 *
 * Example
 *
 * Input
 * Input number: 23
 * 
 * Output
 * 23 is positive
 *
 */

#include <stdio.h>

int main()
{
	int num;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	if(num > 0)
		printf("%d is positive\n", num);
	else if( num < 0)
		printf("%d is negative\n", num);
	else
		printf("%d is zero\n", num);

	return 0;
}
