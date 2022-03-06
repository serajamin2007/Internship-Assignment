#include<stdio.h>
void main()
{
	int m,n,i,j,k;
	printf("Enter size of x\n");
	scanf("%d",&m);
	printf("Enter size of y\n");
	scanf("%d",&n);
	int x[m];
	int y[n];
	printf("Enter value of x\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Enter value of y\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&y[j]);
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(x[i]>y[j])
			{
				int temp;
				temp = x[i];
				x[i] = y[j];
				y[j] = temp;
			}
		}
	}
	printf("Value of x is: \n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",x[i]);
	} 
	int temp1;
	temp1= y[0];
	for(k=0;k<n-1;k++)
	{
		y[k] = y[k+1];
	}
	y[n-1] = temp1;
	printf("\nValue of y is: \n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",y[j]);
	} 
}
