/*************************************************************************
    > File Name: exp-6-51.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Aug  1 10:07:06 2017
 ************************************************************************/

/*
 * Write a C program to print Pascal triangle upto n rows.
 *
 * For example Pascal triangle with 5 rows. 
 *      1
 *     1 1
 *    1 2 1
 *	 1 3 3 1
 *  1 4 6 4 1
 *
 * Logic:
 * Simple formula for getting any term of the Pascal triangle. 
 *  
 *  (n,k)=n!/(k!(n-k)!)
 *
 *  Where n is row number and k is term of that row. 
 *
 */

#include <stdio.h>

long factor(int n);

int main()
{
	int n, k, num, i;
	long term;

	printf("Enter number of rows: ");
	scanf("%d", &num);

	for(n=0; n<num; n++)
	{
		//print two spaces
		for(i=n; i<num; i++)
		{
			printf("%2c", ' ');
		}
		for(k=0; k<=n; k++)
		{
			term = factor(n)/(factor(k)*factor(n-k));
			printf("%4ld", term);
		}
		printf("\n");
	}
	return 0;
}

long factor(int n)
{
	long factorial=1;
	while(n >= 1 )
	{
		factorial *=n;
		n--;
	}
	return factorial;
}
