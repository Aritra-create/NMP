#include<stdio.h>
#include<math.h>
#define EPS 0.00001
float func(float x)
{
	return(9*x*x*x + 18*x*x - 37*x + 70);
}
int main()
{
	float x1,x2,x0;
	int step=0;
	printf("Enter the value of x1 such that that func(x1) is positive\n");
	scanf("%f",&x1);
	printf("Enter the value of x2 such that func(x2) is negative\n");
	scanf("%f",&x0);
	do
	{
		x2=(x0*func(x1)-x1*func(x0))/(func(x1)-func(x0));
	
		if(((func(x0)*func(x2))<0 )){
		
		
		x1=x2;
	}
		else{
		
		
		x0=x2;
	}
		step=step+1;
	printf("%d\t%f\t%f\t%f\t%f\n",step,x0,x1,x2,func(x2));
		
	}while(fabs(func(x2))>EPS);
	printf("the root is %f\n",x2);
	return 0;
	
}
