/*************************************************************************
    > File Name: exp-6-28.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 11:31:35 2017
 ************************************************************************/

/*
 * Write a C program to find sum of all prime numbers in given range.
 *
 * Example
 *
 * Input
 * Input lower limit: 1
 * Input upper limit: 10
 * 
 * Output
 * Sum of prime numbers between 1-10: 17
 *
 */

#include <stdio.h>

int main()
{
	int i, j, start, end, isPrime, sum=0;

	//Read a lower limit from user
	printf("Enter a lower limit: ");
	scanf("%d", &start);

	//Read a upper limit from user
	printf("Enter a upper limit: ");
	scanf("%d", &end);

	//Find all prime number between 1 and n
	for(i=start; i<=end; i++)
	{
		//Asumme current number is Prime
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
		{
			sum += i;
		}
	}

	printf("The sum of all prime numbers between %d and %d is %d\n", start, end, sum);
	return 0;
}
