/*************************************************************************
	> File Name: exp-6-41.c
	> Author: xiaoxiaoh
	> Mail: xiaoxxhao@gmail.com 
	> Created Time: Fri Jul 14 11:06:55 2017
**************************************************************************/

/*
 * Write a C program to convert Octal to Binary number system. 
 *
 * Example
 *
 * Input
 * Input octal number: 172
 * 
 * Output
 * Binary of 172: 01111010
 *
 */

#include <stdio.h>

int main()
{
	int octalValue[] = {0, 1, 10, 11, 100, 101, 110, 111};
	long long octal, tempOctal, binary, place;
	int digit;

	// Read octal number from user
	printf("Enter any octal number: ");
	scanf("%lld", &octal);

	tempOctal = octal;
	binary = 0;
	place = 1;

	//Conver octal to binary
	while(tempOctal > 0)
	{
		//Extract the last digit of octal
		digit = tempOctal % 10;
		
		//Get the binary equivalent of octal digit, add it to the binary variable
		binary += octalValue[digit]*place;
		tempOctal /= 10;
		place *= 1000;
	}

	printf("The octal number is %lld, convert to binary number is %lld\n", octal, binary);
	return 0;
}
