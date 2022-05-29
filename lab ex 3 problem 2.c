#include<stdio.h>
int main()
{
	int i,number,result;
	printf("Enter a number:");
	scanf("%d",&number);
	result=1;
	for(i=1; i<=number; i++ )
	{
		result=result*i;
	}
	printf("this number's factorial valu is %d ",result);
	return 0;
}
