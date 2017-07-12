/*************************************************************************
    > File Name: exp-6-21.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul 10 14:51:46 2017
 ************************************************************************/

/*
 * Write a C program to find power of any number using for loop
 *
 * Example
 *
 * Input
 * Input base: 2
 * Input exponent: 5
 * 
 * Output
 * 2 ^ 5 = 32
 *
 */

#include <stdio.h>

int main()
{
	int base, exponent;
	long long power = 1;
	int i;

	//read base and exponent from user
	printf("Enter base and exponent one by one: ");
	scanf("%d%d", &base, &exponent);

	for(i=1; i<=exponent; i++)
	{
		power *= base;
	}

	printf("%d ^ %d = %lld\n", base, exponent, power);

	return 0;
}
