//this programme is to find out next date given present date//
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("please enter the date");
	scanf("%d",&a);
	printf("please enter the month");
	scanf("%d",&b);
	printf("please enter the year");
	scanf("%d",&c);
	if(c%4==0&&(c%100!=0||c%400==0))
	{
		if(a>=1&&a<=30&&(b==1||b==3||b==5||b==7||b==8||b==10||b==12))
		{
			a++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a>=1&&a<=29&&(b==4||b==6||b==9||b==11))
		{
			a++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a>=1&&a<=28&&(b==2))
		{
			a++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==31&&(b==1||b==3||b==5||b==7||b==8||b==10))
		{
			a=1;
			b++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==30&&(b==4||b==6||b==9||b==11))
		{
			a==1;
			b++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==31&&b==12)
		{
			a=1;
			b=1;
			c++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==29&&(b==2))
		{
			a=1;
			b++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else
		{
			printf("the required day does not exist")
		}
	}
	else
	{
		if(a>=1&&a<=30&&(b==1||b==3||b==5||b==7||b==8||b==10||b==12))
		{
			a++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a>=1&&a<=29&&(b==4||b==6||b==9||b==11))
		{
			a++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a>=1&&a<=27&&(b==2))
		{
			a++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==31&&(b==1||b==3||b==5||b==7||b==8||b==10))
		{
			a=1;
			b++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==30&&(b==4||b==6||b==9||b==11))
		{
			a==1;
			b++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==31&&b==12)
		{
			a=1;
			b=1;
			c++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else if(a==28&&(b==2))
		{
			a=1;
			b++;
			printf("the required date is %d \n",a);
			printf("the required month is %d \n",b);
			printf("the required year is %d \n",c);
		}
		else
		{
			printf("the given date is incorrect");
		}
	}
	return 0;
}
