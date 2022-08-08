#include<stdio.h>
#include<math.h>
#define EPS 0.0001
int main()
{
    int i,j,n;
    float A[10][10],x[10],sum=0.0,max;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    printf("\n Enter the initial guess:\n");
    for(i=1;i<=n;i++)
    {
    	printf("x[%d]:",i);
    	scanf("%f",&x[i]);
	}
    
	
    do
    {
    	max=0;
    	for(i=1;i<=n;i++)
    	{
    	  sum=A[i][n+1];
		  for(j=1;j<=n;j++)
		  {
		  	if(i!=j)
		  	{
		  		sum=sum-(A[i][j]*x[j]);
			  }
	}
	sum=sum/A[i][i];
	if(fabs(x[i]-sum)>max)
	
	
	max=fabs(x[i]-sum);
	x[i]=sum;
	printf("\n x%d=%f \n",i+1,x[i]);
	}
	
	
	}while(max>=EPS);
	printf("\nThe solution is: \n");
for(i=1; i<=n; i++)
    {
        printf("\n\t%f\t",x[i]); 
    }
    return 0;
}
    
    
