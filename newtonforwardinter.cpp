#include<stdio.h>
int main()
{
	float x[10],y[10],f[10][10],h,s,X,sum,t;
	int n,i,j;
	printf("Enter value of X\n");
    scanf("%f",&X);
    printf("Enter the value of n \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf(" Enter the values of x[i]");
    scanf("%f",&x[i]);
    printf(" Enter the values of y[i]");
    scanf("%f",&y[i]);
	}
	h=x[1]-x[0];
	s=(X-x[0])/h;
	sum=y[0];
	t=sum;
	for(j=0;j<n;j++)
	{
		f[0][j]=y[j];
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			f[i][j]=f[i-1][j+1]-f[i-1][j];
		}
	}
	printf("\n Difference table is :");
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%f",x[i]);
		for(j=0;j<n-i;j++)
		printf("%f\t",f[j][i]);
		printf("\n");
	}

	t=1;
	for(i=1;i<n;i++)
	{
		t=t*(s-i+1)/i;
		sum=sum + (t*f[i][0]);
		
	}
	printf("\n The value is %f",sum);
	return 0;
}
