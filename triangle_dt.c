#include<stdio.h>

int main()
{
	int a,b,c;
	char istriangle;
	printf("\nEnter 3 integers : \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
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
		if((a==b) && (b==c))
		{	
			printf("\nEquilateral triangle\n");
		}
		else if((a!=b)&&(b!=c)&&(c!=a))
		{	
			printf("\nScalene Triangle\n");
		}
		else
		{
			printf("\nIsosceles Triangle\n");
		}
	}
	else
	{
		printf("\nCan't form a triangle\n");
	}
}
