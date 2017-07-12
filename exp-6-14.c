/*************************************************************************
    > File Name: exp-6-14.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 14:09:28 2017
 ************************************************************************/

/*
 * Write a C program to calculate sum of digits of any number.
 *
 * Example
 *
 * Input
 * Input any number: 1234
 * 
 * Output
 * Sum of digits: 10
 *
 */

#include <stdio.h>

int main()
{
	int num, sum;
	sum = 0;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The sum of digits of %d is ", num);

	while(num != 0)
	{
		sum += num % 10;
		num = num / 10;
	}

	printf("%d\n", sum);

	return 0;
}
