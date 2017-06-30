/*************************************************************************
    > File Name: exp-3-4.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 09:20:25 2017
 ************************************************************************/

/*
 * Write a C program to check whether year is leap year or not using conditional/ternary operator.
 *
 * Leap year condition:
 * If the year is EXACTLY DIVISIBLE by 4 and NOT DIVISIBLE by 100 then its LEAP YEAR 
 * Else if the year is EXACTLY DIVISIBLE 400 then its LEAP YEAR 
 * Else its a COMMON YEAR 
 *
 */

#include <stdio.h>

int main()
{
	int year;

	//read a year number from user
	printf("Enter a year: ");
	scanf("%d", &year);
	
	//(((year%4 == 0) && (year%100 !=0)) || (year%400 == 0))?  printf("%d is leap year\n", year) : printf("%d is common year\n", year);
	printf("%d is %s year\n", year, (year%4 == 0 && year %100 != 0)? "leap":(year%400 == 0)? "leap" : "common");

	return 0;

}
