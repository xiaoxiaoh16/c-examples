/*************************************************************************
    > File Name: exp-6-11.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 10:47:15 2017
 ************************************************************************/

/*
 * Write a C program to find first and last digit of any number.
 *
 * Example
 *
 * Input
 * Input number: 1234
 * 
 * Output
 * First digit: 1
 * Last digit: 4
 *
 */

#include <stdio.h>
#include <math.h>	//used for log10() and pow() function 

int main()
{
	int num, digits, firstDigit, lastDigit;

	//Read a number from user
	printf("Enter any numbers: ");
	scanf("%d", &num);

	lastDigit = num % 10;
	digits = log10(num) + 1;
	firstDigit = num / (pow(10, (digits - 1)));

	printf("The first and last figit of %d is [%d and %d]\n", num, firstDigit, lastDigit);

	return 0;
}
