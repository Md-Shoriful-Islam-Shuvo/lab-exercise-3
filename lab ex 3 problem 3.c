#include<stdio.h>
int main()
{
	int i,j,c;
	printf("prime number 1-300 are:\n");
	printf("Number 1 is neither prime nor composite\n");
	for(i=2;i<=300; i++)
	{
		c=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c=0;
				break;
			}
		}
		if(c)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
