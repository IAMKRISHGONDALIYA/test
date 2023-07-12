#include<stdio.h>
main()
{
	int a,sum=0;
	printf("enter your unit=");
	scanf("%d",a);
	if(a>=50)
	{
		sum=a*0.50;
	}
	else if(a>=150)
	{
		sum=(a-50)*0.75+25;
	}
	else if(a>=250)
	{
		sum=(a-150)*1.20+100
	}
	else
	{
		sum=(a-250)*1.50=220;
	}
	as=sum=20/2;
	printf("enter final bill",a,as);
}
