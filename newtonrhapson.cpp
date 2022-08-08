#include<stdio.h>
#include<math.h>
#define EPS 0.0001
float func(float x)
{
	return(9*x*x*x + 18*x*x - 37*x - 70);
}
float dfunc(float x)
{
	return(27*x*x + 36*x - 37);
}
int main()
{
	int step=0;
	float x1,x0;
	printf("Enter the value of x0\n");
	scanf("%f",&x0);
	x1=x0;
	do
	{   step++;
	     x0=x1;
		x1=x0-(func(x0)/dfunc(x0));
		
		
	printf("%d\t%f\t%f\t%f\t%f\n",step,x0,func(x0),dfunc(x0),x1);
	
      
		
	}while(fabs(x1-x0)>EPS);
	printf("the root is %f\n",x1);
	return 0;
	
}
