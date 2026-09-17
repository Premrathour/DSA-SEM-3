#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter marks of Physics: ");
	scanf("%f", &a);
	printf("Enter marks of chemistry:  ");
	scanf("%f",&b);
	printf("Enter marks of maths:  ");
	scanf("%f",&c);
	float d = (a+b+c)/3;
	printf("Average of marks is %f",d);
	return 0;
	
	
}
