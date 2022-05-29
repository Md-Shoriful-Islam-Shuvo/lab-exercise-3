#include<stdio.h>
int main()
{
	int num,i,c;
	printf("Enter a real number:");
	scanf("%d",&num);
	c=1;
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			printf("%d is not a prime number",num);
			c=0;
			break;
		}
	}
	if(c)
	{
		printf("%d is a prime number",num);
	}
	return 0;
}
