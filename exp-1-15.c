/*************************************************************************
    > File Name: exp-1-15.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Jun 27 17:02:24 2017
 ************************************************************************/

/*
 * Write a C program to enter marks of five subjects and calculate total, average and percentage.
 *
 * Example
 *
 * Input
 * Enter marks of five subjects: 95 76 85 90 89
 * 
 * Output
 * Total = 435
 * Average = 87
 * Percentage = 87.00
 *
 */

#include <stdio.h>

int main()
{
	float n1, n2, n3, n4, n5;
	float total, average, percentage;

	/* read marks of five subjects from user */
	printf("Enter marks of five subjects: \n");
	scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);

	/* calculate total, average and percentage one by one */
	total = n1 + n2 + n3 + n4 + n5;
	average = total / 5;
	percentage = (average / 500) * 100;

	printf("Total marks is %.2lf\n", total);
	printf("Average marks is %.2lf\n", average);
	printf("Percentage is %.2lf\n", percentage);

	return 0;
}
