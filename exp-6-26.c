/*************************************************************************
    > File Name: exp-6-26.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 10:28:25 2017
 ************************************************************************/

/*
 * Write a C program to check whether a number is Prime number or not.
 *
 * Example
 *
 * Input
 * Input any number: 17
 * 
 * Output
 * 17 is prime number
 *
 */

#include <stdio.h>

int main()
{
	int i, num, isPrime=1;

	//Read a number from user
	printf("Enter a number from user: ");
	scanf("%d", &num);

	for(i=2; i<num; i++)
	{
		if(num%i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if(isPrime == 0)
			printf("%d is not prime number\n", num);
	else
		printf("%d is prime number\n", num);
	
	return 0;
}
