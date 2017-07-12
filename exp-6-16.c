/*************************************************************************
    > File Name: exp-6-16.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 14:35:59 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and print its reverse.
 *
 * Example
 *
 * Input
 * Input number: 1234
 * 
 * Output
 * Reverse of 1234 = 4321
 *
 */

#include <stdio.h>

int main()
{
	int num, reverse=0;

	//Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The original number is %d, the reverse number of it is ", num);

	//repeat the till number becomes 0
	while(num != 0)
	{
		// multiple reverse by 10 and adds the last digit to it
		reverse = (reverse * 10) + (num % 10);
		num /= 10;
	}
	
	printf("%d\n", reverse);

	return 0;
}
