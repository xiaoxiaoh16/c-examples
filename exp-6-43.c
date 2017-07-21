/*************************************************************************
    > File Name: exp-6-43.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul 19 09:35:11 2017
 ************************************************************************/

/*
 * Write a C program to convert Octal to Decimal number system.
 * 
 * Example
 *
 * Input
 * Input octal number: 172
 * 
 * Output
 * Decimal number: 122
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
	long long octal, tempOctal, decimal;
	int digit, place;

	//Read a octal number from user
	printf("Enter any octal number: ");
	scanf("%lld", &octal);

	tempOctal = octal;
	place = 0;

	while(tempOctal > 0)
	{
		digit = tempOctal % 10;		
		decimal += pow(8, place) * digit;

		tempOctal /= 10;
		place++;
	}

	printf("The orgin octal number %lld, convert to decimal is %lld\n",octal, decimal);
	return 0;
}
