/*************************************************************************
    > File Name: exp-6-33.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jul 11 14:45:25 2017
 ************************************************************************/

/*
 * Write a C program to print all Perfect numbers in given range.
 *
 * Example
 *
 * Input
 * Input upper limit: 100
 * 
 * Output
 * Perfect numbers between 1 to 100: 6, 28
 *
 */

#include <stdio.h>

int main()
{
	int i, j, start, end, num, sum;

	// Read lower limit and upper limit from user 
	printf("Enter lower limit and upper limit one by one: ");
	scanf("%d%d", &start, &end);

	printf("All Perfect numbers between %d and %d are:", start, end);

	for(i=start; i<=end; i++)
	{
		num = i;
		sum = 0;
		for(j=1; j<num; j++)
		{
			if(num%j == 0)
			{
				sum += j;
			}
		}
		if(num == sum)
		{
			printf(" %d", num);
		}
	}
	printf("\n");
	return 0;
}
