/*************************************************************************
    > File Name: exp-6-39.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul 14 09:47:35 2017
 ************************************************************************/

/*
 *  a C program to convert Binary to Octal number system.
 *
 * Example
 *
 * Input
 * Input binary number: 00110111
 * 
 * Output
 * Octal number: 67
 *
 */

#include <stdio.h>

int main()
{
	long long num, newNum, octal;
	int i, lastDigit;

	//Read a binary number from user
	printf("Enter a binary number: ");
	scanf("%lld", &num);

	octal = 0;
	newNum = num;
	i = 1;

	while(newNum > 0)
	{
		lastDigit = newNum % 10;
		octal += lastDigit*i;
		i *=2;
		newNum /= 10;
	}
	printf("The origin binary number %lld conver to octal number is %llo\n", num, octal);
	return 0;
}
