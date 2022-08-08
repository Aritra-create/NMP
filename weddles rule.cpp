#include<stdio.h>
#include<math.h>
float func(float x)
{
	return 1/sqrt(1-(x*x));
}
int main()
{
	float a,b,h,sum;
	int n,m,i;
	printf("\n Enter the value of lower limit:-");
	scanf("%f",&a);
	printf("\n Enter the value of upper limit:-");
	scanf("%f",&b);
	printf("\n Enter the value of n:-");
	scanf("%d",&n);
	h=(b-a)/n;
	printf("Number of iterations   a  b   sum\n");
	m=n/6;
	sum=0;
	   if(n%6==0)
	   {
	   	for(i=1;i<=m;i++)
	   	{
		   
	   	sum=sum+((3*h/10)*(func(a)+func(a+2*h)+5*func(a+h)+6*func(a+3*h)+func(a+4*h)+5*func(a+5*h)+func(a+6*h)));
	   	a=a+6*h;
	   	printf("      %d     %f%f%f\n",i,a,b,sum);
	   	printf("Value of integral is %f\n",sum);
	   }
}
	   else{
	   	printf("Weddles rule is not applicable");
	   }
	return 0;
	
}
