/*************************************************************************
    > File Name: exp-6-36.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul 12 12:00:46 2017
 ************************************************************************/

/*
 * Write a C program to print Fibonacci series in given range //up to n terms.
 *
 * Fibonacci series is a series of numbers where the current number is the sum of previous two terms. For Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, ... , (n-1th + n-2th)
 * 
 * Example
 *
 * Input
 * Input lower term: 0
 * Input upper term: 35
 *
 * //Input number of terms: 10
 * 
 * Output
 * Fibonacci series: 
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *
 */

#include <stdio.h>

int main()
{
	int a, b, term, i, start, end;

	// Read the lower and upper term from user
	printf("Enter the lower and upper term one by one: ");
	scanf("%d%d", &start, &end);

	printf("All fibonacci series between %d and %d are: ", start, end);

	// Fibonacci magic initialization
	a = 0;
	b = 1;
	term = 0;

	while(term <= end)
	{
		if(term >= start)
		{
			printf(" %d", term);
		}
		a = b;	//cpoy n-1 to n-2
		b = term;	//copy current to n-1
		term = a + b;	//new term
	}
	printf("\n");
	return 0;
}

