/*************************************************************************
    > File Name: exp-6-13.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 11:55:49 2017
 ************************************************************************/

/*
 * Write a C program to swap first and last digits of any number.
 *
 * Example
 *
 * Input
 * Input any number: 12345
 * 
 * Output
 * Number after swapping first and last digit: 52341
 *
 */

#include <stdio.h>
#include <math.h>	//used for log10(), round() and pow() function

int main()
{
	int num, firstDigit, lastDigit, digits, newNum;

	// Read a number from user
	printf("Enter a number from user: ");
	scanf("%d", &num);

	lastDigit = num % 10;
	digits = log10(num) + 1;
	firstDigit = num / (pow(10, (digits - 1)));

	/*
	exp-6-13.c:36:16: error: invalid operands to binary expression ('double' and 'double')
	newNum = (num % (pow(10, (digits - 1)))) + pow(10, (digits - 1)) * lastDigit - lastDigit + firstDigit;
	*/
	newNum = num % (int)round(pow(10, (digits - 1))) + pow(10, (digits - 1)) * lastDigit - lastDigit + firstDigit;

	printf("The original number is %d, after swapping first and last digits the new number is %d\n", num, newNum);

	return 0;
}
