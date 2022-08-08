#include<stdio.h>
float func(float x)
{
	return 1/(1+(x*x));
}
float trapezoidal(float a,float b,float n)
{
	float h = (b-a)/n;
	float s = func(a)+func(b);
	for(int i = 1;i < n;i++)
	s += 2*func(a+i*h);
	return (h/2)*s;
}
int main()
{
	float x0,xn;
	int n;
	printf("\n Enter the value of initial limit:-");
	scanf("%f",&x0);
	printf("\n Enter the value of final limit:-");
	scanf("%f",&xn);
	printf("\n Enter the value of subintervals:-");
	scanf("%d",&n);
	printf("Value of integral is %6.4f\n",trapezoidal(x0,xn,n));
	return 0;
}
