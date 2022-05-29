#include<stdio.h>
int main()
{
	double i,j,value1=1,value2=0;
	printf("1/1!+2/2!+3/3!.........7/7!=");
	
	for(i=1; i<=7; i++)
	{
		value1=1;
		for(j=1; j<=i; j++)
		{
			value1=value1*j;
			//	printf("value1=%lf \t",value1);
		}
		value2=value2+(i/value1);
		//	printf("value2=%lf \t",value2);
	}
	printf("%lf \t",value2);
	return 0;
}
