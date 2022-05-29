#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,r;
	printf("Enatr how many fibonacci tearms u want to see:");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=3; i<=n; i++)
	{
		r=a+b;
		printf("%d\t",r);
		a=b;
		b=r;
	}
	return 0;
}
