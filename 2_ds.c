#include<stdio.h>
void binary_num(int);
void main()
{
	int n;
	printf("Enter the number till you want to generate binary no.\n");
	scanf("%d",&n);
	printf("The binary numbers are: \n");
	binary_num(n);
}

void binary_num(int x)
{
	int i,j;
	int a[10];
	for(i=1;i<=x;i++)
	{
		int k =i;
		for(j=0;k>0;j++)
		{

			a[j] = k%2;
			k = k/2;
		}
		for(j = j-1;j>=0;j--)
		{
			printf("%d",a[j]);
		}
		printf("\t");
	}
}
