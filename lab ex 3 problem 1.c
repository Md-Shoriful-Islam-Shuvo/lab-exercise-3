#include<stdio.h>
int main()
{
	int i, hour, over_time, earn;
	for(i=1; i<=10; ++i)
	{
		printf("\nEnter how many hour the emplyee no: %d worked:",i);
		scanf("%d",&hour);
		if(hour>40)
		{
		    over_time= (hour-40);
		    earn=(over_time*12);
		    printf("   Over time payment is %d Rs.\n",earn);
	    }
	    else
	    {
	    	printf("   Didn't work over time\n ");
		}
	}
	return 0;
}
