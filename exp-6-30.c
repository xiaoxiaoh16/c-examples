/*************************************************************************
    > File Name: exp-6-30.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 11:57:46 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is Armstrong number or not.
 *
 * An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits. Read more about Armstrong numbers. Below are few examples of Armstrong numbers: 
 * 6 = 6^1 = 6 
 * 371 = 3^3 + 7^3 + 1^3 = 371
 *
 * Example
 *
 * Input
 * Input number: 371
 * 
 * Output
 * 371 is armstrong number
 *
 */

#include <stdio.h>
#include <math.h>	//used for log10(), pow() and round() functions

int main()
{
	int num, newNum, digits, lastDigit, sum;

	//Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	newNum = num;
	digits = (int)(log10(newNum)) + 1;

	//Caculate sum of power of digits
	while(newNum > 0)
	{
		//EXtract the last digit
		lastDigit = newNum % 10;

		//Clculate the sum
		sum += pow(lastDigit, digits);

		//Remove the last digit
		newNum /= 10;
	}

	if(num == sum)
		printf("The number %d is Armstrong number\n", num);
	else
		printf("The number %d is not Armstrong number\n", num);

	return 0;
}
