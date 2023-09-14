//this programme is to find out the week day//
#include<stdio.h>
int main()
{
	int a;
	printf("please enter the weekday number");
	scanf("%d",&a);
	if(a==1)
	{
		printf("the day is monday");
	}
	else if(a==2)
	{
		printf("the day is tuesday");
	}
	else if(a==3)
	{
		printf("the day is wednesday");
	}
	else if(a==4)
	{
		printf("the day is thursday");
	}
	else if(a==5)
	{
		printf("the day is friday");
	}
	else if(a==6)
	{
		printf("the day is saturday");
	}
	else if(a==7)
	{
		printf("the day is sunday");
	}
	else
	{
		printf("the day does not exist");
	}
	return 0;
}
