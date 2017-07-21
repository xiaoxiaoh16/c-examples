/*************************************************************************
    > File Name: exp-6-44.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Wed Jul 19 14:43:01 2017
 ************************************************************************/

/*
 * Write a C program to convert Octal to Hexadecimal number system. 
 *
 * Example
 *
 * Input
 * Input octal number: 175
 * 
 * Output
 * Hexadecimal number: 7D
 *
 */

#include <stdio.h>
#include <string.h>

char *strrev(char *str);

int main()
{
	int octalValue[]= {0, 1, 10, 11, 100, 101, 110, 111};
	long long octal, tempOctal, binary, place;
	char hex[65] = "";
	int digit;

	place = 1;
	binary = 0;

	// Input octal number from user
	printf("Enter any octal number: ");
	scanf("%lld", &octal);

	tempOctal = octal;
	
	/* Octal to binary conversion */
	while(tempOctal > 0)
	{
		digit = tempOctal % 10;
		binary += octalValue[digit] * place;
		tempOctal /= 10;
		place *= 1000;
	}

	/* Binary to hexadecimal conversion */
	while(binary > 0)
	{
		digit = binary % 10000;
		switch(digit)
		{
			case 0:
				strcat(hex, "0");
				break;
			case 1:
				strcat(hex, "1");
				break;
			case 10:
				strcat(hex, "2");
				break;
			case 11:
				strcat(hex, "3");
				break;
			case 100:
				strcat(hex, "4");
				break;
			case 101:
				strcat(hex, "5");
				break;
			case 110:
				strcat(hex, "6");
				break;
			case 111:
				strcat(hex, "7");
				break;
			case 1000:
				strcat(hex, "8");
				break;
			case 1001:
				strcat(hex, "9");
				break;
			case 1010:
				strcat(hex, "A");
				break;
			case 1011:
				strcat(hex, "B");
				break;
			case 1100:
				strcat(hex, "C");
				break;
			case 1101:
				strcat(hex, "D");
				break;
			case 1110:
				strcat(hex, "E");
				break;
			case 1111:
				strcat(hex, "F");
				break;
		}
		binary /= 10000;
	}
	strrev(hex);
	printf("The origin octal number is %lld, convert to hexadecimal number is %s\n", octal, hex);

	return 0;
}


char *strrev(char *str)
{
	int i=strlen(str)-1;
	int j=0;
	char ch;
	
	while(i > j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return str;
}

