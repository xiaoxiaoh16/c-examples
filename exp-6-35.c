/*************************************************************************
    > File Name: exp-6-35.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul 12 11:41:12 2017
 ************************************************************************/

/*
 * Write a C program to print all Strong numbers in given range.
 *
 * Example
 *
 * Input
 * Input lower limit: 1
 * Input upper limit: 1000
 * 
 * Output
 * Strong numbers between 1-1000: 
 * 1, 2, 145
 *
 */

#include <stdio.h>

int main()
{
	int i, j, num, start, end, lastDigit, sum;
	long long fact;

	// Read the lower limit and upper limit from user
	printf("Enter the lower limit and upper limit one by one: ");
	scanf("%d%d", &start, &end);

	printf("All strong numbers between %d and %d are:", start, end);

	// Interate from start to end
	for(i=start; i<=end; i++)
	{
		// number to check for strong number
		num = i;
		sum = 0;

		// Find the sum of factorial of digits
		while(num > 0)
		{
			fact = 1;
			lastDigit = num % 10;
			
			// Find factorial of last digit of current number
			for(j=1; j<=lastDigit; j++)
			{
				fact *= j; 
			}
			sum += fact;
			num /= 10;
		}
		if(i == sum)
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return 0;
}

