#include <stdio.h>
#include <string.h>

int calculator()
{

	char ch;
	int x,y,tmp;
	int sum,sub,mul,dev,rd;

	printf("Please input the computation methods: a for addition, s for substraction, m for multiplication, d for devision, r for rouding, c for comparing\n");
	scanf("%c",&ch);
	
	switch (ch) {
		/* addition */
		case 'a': 
			printf("Please input num x and y.\n");
			scanf("%d%d",&x,&y);
			sum=x+y;
			printf("%d + %d = %d\n",x,y,sum);
			break;
		/* substraction */			
		case 's':
                        printf("Please input num x and y\n");
                        scanf("%d%d",&x,&y);
			if (x>y){
				sub=x-y;
				printf("%d - %d = %d\n",x,y,sub);
			}
			else{
				sub=y-x;
                        	printf("%d - %d = %d\n",y,x,sub);
			}
			break;
		/* multiplication */
		case 'm':
                        printf("Please input num x and y.\n");
                        scanf("%d%d",&x,&y);
                        mul=x*y;
                        printf("%d * %d = %d\n",x,y,mul);
			break;
		/* devision */
		case 'd':
                        printf("Please input num x and y.\n");
                        scanf("%d%d",&x,&y);
			if (x>y){
                        	dev=x/y;
                        	printf("%d / %d = %d\n",x,y,dev);
			}
			else{
				dev=y/x;
				printf("%d / %d = %d\n",y,x,dev);
			}
			break;
		/* rounding */
		case 'r':
                        printf("Please input num x.\n");
                        scanf("%d",&x);
			if ((x % 10) >= 5){
				rd= (x/10+1)*10;
				printf("round(%d)=%d\n",x,rd);
			}
			else{
				rd= (x/10)*10;
				printf("round(%d)=%d\n",x,rd);
			}
			break;
		/* compare two num*/
		case 'c':
			printf("Please input x and y");
			scanf("%d%d",&x,&y);
			tmp=x>y?x:y;
			printf("The big one is %d, in %d and %d\n",tmp,x,y);
			break;
		default:
			printf("Please input correct letter!\n");
			break;
	}	
	return 0;
}
