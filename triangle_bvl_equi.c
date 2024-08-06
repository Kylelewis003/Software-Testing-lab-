#include<stdio.h>

int main()
{	
	int a,b,c,c1,c2,c3;
	char istriangle;
	do
	{
		printf("\nEnter three numbers : \n");
		scanf("%d%d%d",&a,&b,&c);
		printf("\na = %d\tb = %d\tc = %d\n",a,b,c);
		c1 = (a>=1 && a<=10);
		c2 = (b>=1 && b<=10);
		c3 = (c>=1 && c<=10);
		if(!c1)
		{	
			printf("The value of a is not a permited value\n");
		}
		if(!c2)
		{
			printf("The value of b is not a permitted value\n");
		}
		if(!c3)
		{
			printf("The value of c is not a permitted value");
	    }
		
	}while(!(c1 && c2 && c3));
	
	if(a<b+c && b<a+c && c<a+b)
	{	
		istriangle = 'y';
	}
	else
	{	
		istriangle = 'n';
	}
	if(istriangle == 'y')
	{
		if((a==b)&&(b==c))
		{
			printf("\nEquilateral Triangle");
		}
		else if((a!=b) && (b!=c) && (c!=a))
		{
			printf("\nScalene  Triangle");
		}
		else
		{	
			printf("\nIsosceles Triangle");
		}
	}
	else
	{
		printf("\nCan't form a triangle");
	}
}
	
	
	
	
	
	
	
	

