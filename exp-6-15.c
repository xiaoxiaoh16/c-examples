/*************************************************************************
    > File Name: exp-6-15.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 14:17:57 2017
 ************************************************************************/

/* 
 * Write a C program to calculate product of digits of any number.
 *
 * Example
 *
 * Input
 * Input number: 1234
 * 
 * Output
 * Product of digits: 24
 *
 */

#include <stdio.h>

int main()
{
	int num;
	long product = 1L;

	//Read a number from user
	printf("Enter a number from user: ");
	scanf("%d", &num);

	printf("The product of digits of %d is ", num);

	while(num != 0)
	{
		product *= num % 10;
		num /= 10;
	}
	
	printf("%ld\n", product);
	
	return 0;
}
