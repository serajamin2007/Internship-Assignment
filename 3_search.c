#include<stdio.h>
void main()
{
	int a[10] = {1,5,4,8,9,2,0,6,11,7};
	int i,num,flag=0;
	printf("Enter the number you want to search\n");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==a[i])
		{
			flag = 1;
			
		}
	}
	if(flag=1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	printf("Elements present in array are: \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
