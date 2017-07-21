/*************************************************************************
    > File Name: exp-6-40.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Thu Jul 13 11:46:14 2017
 ************************************************************************/

/*
 * Write a C program to convert Binary to Decimal number system.
 *
 * Example
 *
 * Input
 * Input number: 0011
 * 
 * Output
 * Decimal: 3
 *
 */

#include <stdio.h>
#include <math.h>		//used for pow() function

int main()
{
	int lastDigit, i=0;
	int decimal = 0;
	long long num, newNum;
	
	printf("Enter the binary number: ");
	scanf("%lld", &num);

	newNum = num;
	i = 0;

	while(newNum > 0)
	{
		lastDigit = newNum % 10;
		decimal += (lastDigit * pow(2, i));
		newNum /= 10;
		i++;
	}
	printf("Binary %lld convert to Decimal number is %d\n", num, decimal);
	return 0;
}
