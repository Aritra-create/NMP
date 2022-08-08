#include<stdio.h>
#include<math.h>
#define EPS 0.0001
float func(float x)
{
	return(9*x*x*x + 18*x*x - 37*x - 70);
}
int main()
{
	float x1,x2,x0;
	int step=0;
	printf("Enter the value of x1 such that that func(x1) is positive\n");
	scanf("%f",&x1);
	printf("Enter the value of x2 such that func(x2) is negative\n");
	scanf("%f",&x2);
	do
	{
		x0=(x1+x2)/2;
	
		if(((func(x1)*func(x0))<0 ))
		{
	    	x2=x0;
    	}
		else if((func(x2)*func(x0))<0 )
		{
	    	x1=x0;
    	}
		
	}while((fabs(x2-x1)>=EPS));
	printf("the root is %f\n",x0);
	return 0;
	
}
