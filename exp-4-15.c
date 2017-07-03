/*************************************************************************
    > File Name: exp-4-15.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 14:31:49 2017
 ************************************************************************/

/*
 * Write a C program to input all sides of a triangle and check whether triangle is valid or not.
 *
 * Example
 *
 * Input
 * Input first side: 7
 * Input second side: 10
 * Input third side: 5
 * 
 * Output
 * Triangle is valid
 *
 */

#include <stdio.h>

int main()
{
	int a, b, c;

	//read all sides of a triangle
	printf("Enter three sides for trigangle: ");
	scanf("%d%d%d", &a, &b, &c);

	if((a + b > c) && (a + c > b) && ( b + c > a))
		printf("Triangle is valid\n");
	else
		printf("Triangle is not valid\n");

	return 0;
}

