#include<stdio.h>
main()
{
	int n, rev=0,remdinder,original;
	printf("enteran integer=");
	scanf("%d",&n);
	printf("\noringinginal number is =%d\n",n);
	original=n;
	
	while (n!=0)
	{
		remainder=n % 10;
		rev=rev*10+remainder;
		n /=10;
	}
	printf("\nyour reve num is =%d\n",rev);
	
	if (original==rev)
	printf("\n %d is a palindrome number \n",rev);
	else 
			printf("\n %d is a not palindrome number\n",rev);
}
