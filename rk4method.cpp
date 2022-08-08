#include<stdio.h>
#include<math.h>
#define f(x,y) x*y+y*y
int main()
{
    float x,y,k1,k2,k3,k4,h,xn,k;
    printf("Enter value for x0,y0\n");
    scanf("%f%f",&x,&y);
    printf("Enter value for h and last of x\n");
    scanf("%f%f",&h,&xn);
    printf("\nk1\tk2\tk3\tk4\tX\tY\n");
    while(x<xn)
    {
 k1=f(x,y);
 k2=f((x+h/2.0),(y+k1*h/2.0));
 k3=f((x+h/2.0),(y+k2*h/2.0));
 k4=f((x+h),(y+k3*h));
 k=((k1+2*k2+2*k3+k4)/6);
 y=y+k*h;
 x=x+h;
 printf("%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n",k1,k2,k3,k4,x,y);
    }
    printf("The value of y is %f \n",y);
    return 0;
}
