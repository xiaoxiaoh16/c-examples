/*************************************************************************
    > File Name: exp-6-32.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 12:44:20 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is Perfect number or not. 
 * 
 * Perfect number is a positive integer which is equal to the sum of its proper positive divisors. Read more about Perfect numbers. 
 * For example: 6 is the first perfect number
 * Proper divisors of 6 are 1, 2, 3 
 * Sum of its proper divisors = 1 + 2 + 3 = 6. 
 * Hence 6 is a perfect number.
 *
 * Example
 *
 * Input
 * Input any number: 6
 * 
 * Output
 * 6 is PERFECT NUMBER
 *
 */

#include <stdio.h>

int main()
{
	int i, num, sum=0;

	//Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	//Calculate sum of all proper divisors
	for(i=1; i<num; i++)
	{
		// If i is a divisor of num
		if(num%i == 0)
		{
			sum += i;
		}
	}
	/* Check whether the sum of proper divisors is equal to num */
	if(num == sum)
		printf("%d is Perfect number\n", num);
	else
		printf("%d is not Perfect number\n", num);
	return 0;
}
