/*************************************************************************
    > File Name: exp-6-52.c
    > Author: xiaoxiaoh
    > Mail: xiaoxxhao@gmail.com 
    > Created Time: Tue Aug  1 11:53:10 2017
 ************************************************************************/

/*
 * Star pattern programs - Write a C program to print the given star patterns.
 *
 */

#include <stdio.h>

int printSquareStar();
int printHollowSquareStar();
int printRhombusStar();
int printHollowRhombusStar();
int printMirroredRhombusStar();
int printHollowMirroredRhombusStar();
int printRightTriangleStar();
int printHollowRightTriangleStar();
int printMirrioredRightTriangleStar();
int printHollowMirroredRightTriangleStar();
int printInvertedRightTriangleStar();
int printHollowInvertedRightTriangleStar();
int printInvertedMirroredRightTriangleStar();
int printHollowInvertedMirroredRightTriangleStar();
int printPyramidStar();
int printHollowPyramidStar();
int printInvertedPyramidStar();
int printHollowInvertedPyramidStar();
int printHalfDiamondStar(); 
int printMirroredHalfDiamondStar();
int printDiamondStar();
int printHollowDiamondStar();
int printRightArrowStar();
int printLeftArrowStar();
int printPlusStar();
int printXStart();
int printEightStar();
int printHeartStar();

int main()
{
	//printSquareStar();
	//printHollowSquareStar();
	//printRhombusStar();
	//printHollowRhombusStar();
	//printMirroredRhombusStar();
	//printHollowMirroredRhombusStar();	
	//printRightTriangleStar();
	//printHollowRightTriangleStar();	
	//printMirroredRightTriangleStar();
	//printHollowMirroredRightTriangleStar();
	//printInvertedRightTriangleStar();
	//printHollowInvertedRightTriangleStar();
	//printInvertedMirroredRightTriangleStar();
	//printHollowInvertedMirroredRightTriangleStar();
	//printPyramidStar();
	//printHollowPyramidStar();
	//printInvertedPyramidStar();
	//printHollowInvertedPyramidStar();
	//printHalfDiamondStar(); 
	//printMirroredHalfDiamondStar();
	//printDiamondStar();
	//printHollowDiamondStar();
	//printRightArrowStar();
	//printLeftArrowStar();
	//printPlusStar();
	//printXStart();
	//printEightStar();
	printHeartStar();

}

int printHeartStar()
{
	int i, j, m, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=num/2; i<=num; i+=2)
	{
		for(j=1; j<num-i; j+=2)
		{
			printf("%2c", ' ');
		}
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
		for(j=1; j<=num-i; j++)
		{
			printf("%2c", ' ');
		}
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
	printf("\n");
	}
	for(i=num; i>=1; i--)
	{
		for(j=i; j<num; j++)
		{
			printf("%2c", ' ');
		}
		for(j=1; j<=(i*2)-1; j++)
		{
			printf("%2c", '*');
		}
	printf("\n");
	}
	return 0;
}

int printEightStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);
	for(i=1; i<=(2*num-1); i++)
	{
		for(j=1; j<=(2*num-1); j++)
		{
			printf("%2c", '&');
			if((i==1) ||(i==num-2) ||(j==1) ||(j==num-2) ||(i==(2*num-5)))
				printf("%2c", ' ');
			else
				printf("%2c", '*');
		}
			printf("\n");
	}
	return 0;
}

int printXStart()
{
	int i, j, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=(2*num-1); i++)
	{
		for(j=1; j<=(2*num-1); j++)
		{
			if((i==j) || (i+j)==(2*num))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0; 
}

int printPlusStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);
	
	for(i=1; i<=num-1; i++)
	{
		for(j=1; j<=num-1; j++)
		{
			printf("%2c", ' ');
		}
		printf("%2c\n", '*');
	}
	for(k=1; k<=(2*num-1); k++)
	{
		printf("%2c", '*');
	}
	printf("\n");
	for(j=1; j<=num-1; j++)
	{
		for(i=1; i<=num-1; i++)
		{
			printf("%2c", ' ');
		}
		printf("%2c\n", '*');
	}
	return 0;
}

int printLeftArrowStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", ' ');
		}
		for(k=num; k>=i; k--)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	for(i=2; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=i; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printRightArrowStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=0; j<=2*i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=num; k>=i; k--)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	for(i=num-1; i>=1; i--)
	{
		for(j=0; j<=2*i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=num; k>=i; k--)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printHollowDiamondStar()
{
	int i, j, m, n, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", '*');
		}
		for(m=1; m<(2*i-1); m++)
		{
			printf("%2c", ' ');
		}
		for(n=i; n<=num; n++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
		for(m=i; m<=(2*num-i-1); m++)
		{
			printf("%2c", ' ');
		}
		for(n=1; n<=i; n++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printDiamondStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=2*i; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=i; k<=(2*num-i); k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printMirroredHalfDiamondStar()
{
	int i, j, k, num;
	
	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(k=num; k>=i; k--)
		{
			printf("%2c", ' ');
		}
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=i; k<=num; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printHalfDiamondStar()
{
	int i, j, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	for(i=num; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}


int printHollowInvertedPyramidStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=i; k<=(2*num-i); k++)
		{
			if((i==1) || (k==i) || (k==(2*num-i)))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}

int printInvertedPyramidStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=num; i>=1; i--)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", ' ');
		}
		for(j=1; j<=(2*i-1); j++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printHollowPyramidStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(k=i; k<=num; k++)
		{
			printf("%2c", ' ');
		}
		for(j=1; j<=(2*i-1); j++)
		{
			if((i==num) || (j==1) || (j==(2*i-1)))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
	
		printf("\n");
	}
	return 0;
}
 
int	printInvertedMirroredRightTriangleStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=i; k<=num; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

 
int	printHollowInvertedMirroredRightTriangleStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=i; k<=num; k++)
		{	
			if((k==num) ||(i==1)||(k==i))
			{
				printf("%2c", '*');
			}
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}


int printPyramidStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=(2*i-1); k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}



int printHollowInvertedRightTriangleStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			if((i==1) || (j==num) || (i==j))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		for(k=1; k<=i; k++)
		{
			printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}

int printInvertedRightTriangleStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", '*');
		}
		for(k=1; k<=i; k++)
		{
			printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}

int printHollowMirroredRightTriangleStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=i; k++)
		{
			if((k==1) || (i==num) || (i==k))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}


int printMirroredRightTriangleStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=i; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printHollowRightTriangleStar()
{
	int i, j, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			if((j==1) || (i==num) || (j==i))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}

int printRightTriangleStar()
{
	int i, j, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printHollowMirroredRhombusStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=num; k++)
		{
			if((k==1) || (k==num) || (i==1) || (i==num))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}

int printMirroredRhombusStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=num; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}

int printHollowRhombusStar()
{
	int i, j, k, num;

	printf("Enter row number from user: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=num; j>=i; j--)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=num; k++)
		{
			if((i==1) ||(i==num) || (k==1) || (k==num))
				printf("%2c", '*');
			else
				printf("%2c", ' ');
		}
		printf("\n");
	}
	return 0;
}

int printRhombusStar()
{
	int i, j, k, num;

	printf("Enter row number: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=num; j>=i; j--)
		{
			printf("%2c", ' ');
		}
		for(k=1; k<=num; k++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}


int printHollowSquareStar()
{
	int i, j, num;

	printf("Enter row number: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			if((j==1) || (j==num) || (i==1) || (i==num))
			{
				printf("%2c", '*');
			}
			else
			{
				printf("%2c", ' ');
			}
		}
		printf("\n");
	}
	return 0;
}



int printSquareStar()
{
	int i, j, num;

	//Read the row number from user
	printf("Enter row number: ");
	scanf("%d", &num);

	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			printf("%2c", '*');
		}
		printf("\n");
	}
	return 0;
}
