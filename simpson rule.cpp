#include<stdio.h>
#include<math.h>
float f(float x){
	return 1/(1+x);
	
}
int main(){
	int n,i;
	float a,b,h,x,sum=0;
	printf("enter the number of sub-intervals :");
	scanf("%d",&n);
	printf("\n enter the lower limit :");
	scanf("%f",&a);
	printf("\n enter the upper limit :");
	scanf("%f",&b);
	h=fabs(b-a)/n;
	for(i=1;i<n;i++){
		x=a+i*h;
		printf("\nx value:\t %f y(%d)\t:%f",x,i,f(x));

		if(i%2==0)
		 sum=sum+2*f(x);
		else
		 sum=sum+4*f(x);
	}
	sum=(h/3)*(f(a)+f(b)+sum);
	printf("\n the intergal value is\t:%0.5f",sum);
	return 0;
}
