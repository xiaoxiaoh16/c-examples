/*************************************************************************
    > File Name: exp-4-4.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 10:32:29 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is divisible by 5 and 11 or not.
 *
 * Example
 *
 * Input
 * Input number: 55
 * 
 * Output
 * Number is divisible by 5 and 11
 *
 */

#include <stdio.h>

int main()
{
	int num;

	//read number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	if((num%5 == 0) && (num%11 == 0))
		printf("%d is divisible by 5 and 11\n", num);
	else
		printf("%d is not divisible by 5 and 11\n", num);

	return 0;

}
