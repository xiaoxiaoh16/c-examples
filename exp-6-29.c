/*************************************************************************
    > File Name: exp-6-29.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 11:42:49 2017
 ************************************************************************/

/*
 * Write a C program to enter any number and print its prime factors.
 *
 * Example
 *
 * Input
 * Input any number: 10
 * 
 * Output
 * Prime factors of 10: 2, 5
 *
 */

#include <stdio.h>

int main()
{
	int i, j, num, isPrime;

	//Read a number from user
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("All prime factors of %d are:", num);

	for(i=2; i<=num; i++)
	{
		//If i is a factor of num
		if(num%i == 0)
		{
			// Asumme current number is prime
			isPrime = 1;
			for(j=2; j<=i/2; j++)
			{
				if(i%j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if(isPrime == 1)
				printf(" %d", i);
		}
	}
	printf("\n");
	return 0;
}
