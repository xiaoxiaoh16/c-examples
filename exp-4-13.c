/*************************************************************************
    > File Name: exp-4-13.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jun 30 13:54:06 2017
 ************************************************************************/

/*
 * Write a C program to count total number of notes in given amount.
 *
 * Example
 *
 * Input
 * Input amount: 575
 * 
 * Output
 * Total number of notes: 
 * 500: 1
 * 100: 0
 * 50: 1
 * 20: 1
 * 10: 0
 * 5: 1
 * 2: 0
 * 1: 0
 */

#include <stdio.h>

int main()
{
	int amount;
	int note1, note2, note5, note10, note20, note50, note100, note500;
	note1 = note2 = note5 = note10 = note20 = note50 = note100 = note500 = 0;

	//read a number from user
	printf("Enter a number: ");
	scanf("%d", &amount);

	note500 = amount / 500;
	note100 = (amount % 500 ) / 100;
	note50 = (amount % 500 % 100) / 50;
	note20 = (amount % 500 % 100 % 50) / 20;
	note10 = (amount % 500 % 100 % 50 % 20) / 10;
	note5 = (amount % 500 % 100 % 50 % 20 % 10) / 5;
	note2 = (amount % 500 % 100 % 50 % 20 % 10 % 5) / 2;
	note1 = amount % 500 % 100 % 50 % 20 %10 % 5 % 2;
	
	printf("Total number of notes is: %d\n", amount);
	printf("500:%d\n",note500);
	printf("100:%d\n",note100);
	printf("50:%d\n",note50);
	printf("20:%d\n",note20);
	printf("10:%d\n",note10);
	printf("5:%d\n",note5);
	printf("2:%d\n",note2);
	printf("1:%d\n",note1);

	return 0;
}

