//this programme is to find out number of days in the given month//
#include<stdio.h>
int main()
{
	int a, b;
	printf("please enter the month");
	scanf("%d",&a);
	printf("please enter the year");
	scanf("%d",&b);
	if((a==1||a==3||a==5||a==7||a==8||a==10||a==12)&&b>=0)
	{
		printf("the number of days in the given month is 31");
	}
	else if((a==4||a==6||a==9||a==11)&&b>=0)
	{
		printf("the number of days in the given month is 30");
	}
	else if(a==2)
	{
		if((b%4==0&&(b%100!=0||b%400==0))&&b>=0)
		{
			printf("the number of days in the given month is 29");
		}
		else
		{
			printf("the number of days in the given month is 28");
		}
	}

	else
	{
		printf("the days do not exist");
	}
	return 0;
}
