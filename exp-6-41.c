/*************************************************************************
    > File Name: exp-6-41.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Fri Jul 14 11:06:55 2017
 ************************************************************************/

/*
 * Write a C program to convert Binary to Hexadecimal number system
 * 
 * Write a C program to convert Binary to Hexadecimal number system. 
 *
 * Example
 *
 * Input
 * Enter binary number: 11000010
 * 
 * Output
 * Hexadecimal: C2
 *
 * Decimal	Binary	Hexadecimal
 * 0	0000	0
 * 1	0001	1
 * 2	0010	2
 * 3	0011	3
 * 4	0100	4
 * 5	0101	5
 * 6	0110	6
 * 7	0111	7
 * 8	1000	8
 * 9	1001	9
 * 10	1010	A
 * 11	1011	B
 * 12	1100	C
 * 13	1101	D
 * 14	1110	E
 * 15	1111	F
 *
 */

#include <stdio.h>
#include <string.h>		//used for strrev() function  and ##### If you are compiling in Linux, then strrev() is not part of string.h

char *strrev(char *str);

int main()
{
	int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
	long long binary, tempBinary;
	char hex[20];
	int index, i, digit;

	// Read binary number from user
	printf("Enter a binary number: ");
	scanf("%lld", &binary);

	// Copy binary number to temp variable
	tempBinary = binary;
	index = 0;

	while(tempBinary!=0)
	{
		//Group binary to last four digit
		digit = tempBinary % 10000;

		//Find hexadecimal equivalent of last four digit
		for(i=0; i<16; i++)
		{
			if(hexConstant[i] == digit)
			{
				if(i < 10)
				{

					// 0-9 integer constant
					hex[index] = (char)(i+48);
				}
				else
				{
					
					// A-F integer constant
					hex[index] = (char)((i-10)+65);
				}
				index++;
				break;
			}
		}
		//Remove the last 4 digits as it is processed
		tempBinary /= 10000;
	}
	hex[index] = '\0';

	/* Reverse the hex digit */
	strrev(hex);
	
	printf("The orgin binary number is %lld, convert to hexadecimal number %s\n", binary, hex);
	return 0;
}

char *strrev(char *str)
{
	int i = strlen(str)-1, j=0;
	char ch;

	while (i>j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i--;
		j++;
	}
	return str;
}
