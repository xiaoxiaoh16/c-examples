/*************************************************************************
    > File Name: exp-4-5.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:38:45 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is even or odd.
 *
 * Example
 *
 * Input
 * Input number: 10
 * 
 * Output
 * 10 is even number
 *
 */

#include <stdio.h>

int main()
{
	int num;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	if(num % 2 == 0)
		printf("%d is even\n", num);
	else
		printf("%d is odd\n", num);

	return 0;
}
