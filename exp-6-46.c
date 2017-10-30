/*************************************************************************
    > File Name: exp-6-46.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul 21 12:54:24 2017
 ************************************************************************/

/*
 * Write a C program to convert Decimal to Octal number system
 *
 * Example
 *
 * Input
 * Input decimal: 22
 * 
 * Output
 * Octal number: 26
 *
 */

#include <stdio.h>

int main()
{
	long long decimal, tempDecimal, octal;
	int i, digit, place=1;

	// Input decimal number from user
	printf("Enter any decimal number: ");
	scanf("%lld", &decimal);

	tempDecimal = decimal;

	// Decimal to octal conversion
	while(tempDecimal>0)
	{
		digit = tempDecimal % 8;
		octal += (digit * place);
		tempDecimal /= 8;
		place *= 10;
	}
	printf("Convert the origin decimal number %lld to octal number is %lld\n", decimal, octal);
	return 0;
}
