/*************************************************************************
    > File Name: exp-6-45.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul 21 10:01:52 2017
 ************************************************************************/

/*
 * Write a C program to convert Decimal to Binary number system
 *
 * Example
 *
 * Input
 * Input decimal number: 112
 * 
 * Output
 * Binary number: 0111000
 *
 */

#include <stdio.h>
#include <string.h>

char *strrev(char *str);

int main()
{
	long long decimal, tempDecimal;
	char binary[65];
	int index = 0;

	// Read a decimal number from user
	printf("Enter any decimal value: ");
	scanf("%lld", &decimal);

	tempDecimal = decimal;

	while(tempDecimal > 0)
	{
		binary[index] = tempDecimal % 2 + '0';		//conver number to char
		tempDecimal /= 2;
		index++;
	}
	binary[index] = '\0';
	strrev(binary);
	printf("The origin binary %lld convert to decimal number is %s\n", decimal, binary);
	return 0;
}

char *strrev(char *str)
{
	int i = strlen(str) - 1;
	int j = 0;
	char ch;

	while (i > j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return str;
}
