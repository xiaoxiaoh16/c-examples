/*************************************************************************
    > File Name: exp-6-34.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 14:52:58 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is Strong number or not.
 *
 * Strong number is a special number whose sum of factorial of digits is equal to the original number. For example: 145 is strong number. Since, 1! + 4! + 5! = 145
 *
 * Example
 *
 * Input
 * Input number: 145
 * 
 * Output
 * 145 is STRONG NUMBER
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int i, num, newNum, digits, lastDigit, sum, fact;
	sum = 0;

	// Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	newNum = num;

	while(num != 0)
	{
		lastDigit = num % 10;
		fact = 1;

		//Find factorial of last digit
		for(i=1; i<=lastDigit; i++)
		{
			fact *= i;
		}
		sum += fact;
		num /= 10;
	}
	if(newNum == sum)
		printf("%d is strong number\n", newNum);
	else
		printf("%d is not strong number\n", newNum);

	return 0;
}
