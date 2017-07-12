/*************************************************************************
    > File Name: exp-6-31.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 12:25:03 2017
 ************************************************************************/

/*
 * Write a C program to print all Armstrong numbers in given range.
 *
 * Example
 *
 * Input
 * Enter lower limit: 1
 * Enter upper limit: 1000
 * 
 * Output
 * Armstrong number between 1 to 1000 are:
 * 1, 2, 3, 4, 5, 6, 7, 8, 9, 370, 371, 407
 *
 */

#include <stdio.h>
#include <math.h>	//used for log(), round() and pow() functions

int main()
{
	int i, start, end, digits, num, lastDigit, sum;

	//Read the lower limit from user
	printf("Enter lower limit: ");
	scanf("%d", &start);

	//Read the upper limit
	printf("Enter upper limit: ");
	scanf("%d", &end);

	printf("All Armstrong numbers between %d and %d are:", start, end);

	for(i=start; i<=end; i++)
	{
		sum = 0;
		num = i;
		digits = (int)log10(num) + 1;
		while(num > 0)
		{
			lastDigit = num % 10;
			sum += pow(lastDigit, digits);
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
