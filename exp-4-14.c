/*************************************************************************
    > File Name: exp-4-14.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 14:21:41 2017
 ************************************************************************/

/*
 * Write a C program to input angles of a triangle and check whether triangle is valid or not.
 *
 * Example
 *
 * Input
 * Input first angle: 60
 * Input second angle: 30
 * Input third angle: 90
 * 
 * Output
 * The triangle is valid
 *
 */

#include <stdio.h>

int main()
{
	int a, b, c, sum;

	/* Read three angles of a triangle from user */
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	sum = a + b + c;

	//check the triangle validity property
	if((sum == 180) && a>0 && b>0 && c>0)
		printf("Triangle is valid\n");
	else
		printf("Triangle is not valid\n");
	
	return 0;
}
