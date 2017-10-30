/*************************************************************************
    > File Name: exp-6-47.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Mon Jul 31 13:00:26 2017
 ************************************************************************/

/*
 * Write a C program to convert Decimal to Hexadecimal number system.
 *
 * Example
 *
 * Input
 * Input decimal number: 26
 * 
 * Output
 * Hexadecimal number: 1A
 *
 */

#include <stdio.h>
#include <string.h>

char *strrev(char *str);

int main()
{
	char hexValue[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	long long decimal, tempDecimal, hexadecimal;
	char hex[65];
	int index, digit;

	//Read decimal number from user
	printf("Enter any decimal number: ");
	scanf("%lld", &decimal);

	tempDecimal = decimal;
	index = 0;

	while(tempDecimal>0)
	{
		digit = tempDecimal % 16;
		hex[index] = hexValue[digit];
		tempDecimal /= 16;
		index++;
	}
	hex[index]='\0';
	strrev(hex);
	printf("The origin number %lld convert Decimal to Hexadecimal number is %s\n", decimal, hex);
	return 0;
}

char *strrev(char *str)
{
	int i=strlen(str)-1;
	int j=0;
	char ch;

	while(i>j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return str;
}

