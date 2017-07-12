/*************************************************************************
    > File Name: exp-6-18.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul  7 15:03:55 2017
 ************************************************************************/

/*
 * Write a C program to find frequency of each digit in a given integer.
 *
 * Example
 *
 * Input
 * Input any number: 116540
 * 
 * Output
 * Frequency of 0 = 1 
 * Frequency of 1 = 2 
 * Frequency of 2 = 0 
 * Frequency of 3 = 0 
 * Frequency of 4 = 1 
 * Frequency of 5 = 1 
 * Frequency of 6 = 1 
 * Frequency of 7 = 0 
 * Frequency of 8 = 0 
 * Frequency of 9 = 0 
 *
 */

#include <stdio.h>
#define BASE 10

int main()
{
	long long num, oldNum;
	int i, lastDigit;
	int freq[BASE];

	//read a number from user
	printf("Enter a number: ");
	scanf("%lld", &num);

	oldNum = num;


	//Initialize frequency array with 0
	for(i=0; i<BASE; i++)
	{
		freq[i] = 0;
	}

	while(num != 0)
	{
		lastDigit = num % 10;
		num /= 10;
		freq[lastDigit]++;
	}

	for(i=0; i<BASE; i++)
	{
		printf("Frequency of %d = %d\n", i, freq[i]);
	}

	return 0;
}
