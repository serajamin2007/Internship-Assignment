#include<stdio.h>
void total_percentage(float *,float *,float *,float *);
void main()
{
	float total,percentage1,percentage2,percentage3;
	total_percentage(&total,&percentage1,&percentage2,&percentage3);
	printf("Total marks obtained by the student is %.2f\nPercentage obtained in subject 1 is : %.2f%\nPercentage obtained in subject 2 is : %.2f%\nPercentage obtained in subject 3 is : %.2f%\n",total,percentage1,percentage2,percentage3);	
}
void total_percentage(float *total,float *percentage1,float *percentage2,float *percentage3)
{
	float s1,s2,s3,p1,p2,p3,t;
	printf("Enter marks of subject1,subject2 and subject3\n");
	scanf("%f %f %f",&s1,&s2,&s3);
	t = s1+s2+s3;
	p1 = (s1/100)*100;
	p2 = (s2/100)*100;
	p3 = (s3/100)*100;
	*total = t;
	*percentage1 = p1;
	*percentage2 = p2;
	*percentage3 = p3;
}
