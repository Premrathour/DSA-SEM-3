// programe to add two numbers using function

#include<stdio.h>
//void sum();            // declaring the function / function prototype/ function signature
////int main()
////{
////	sum();            // calling the function
////	return 0;
////	
////}
////void sum()           // defining the function
////{
////	int a,b;
////	scanf("%d%d",&a,&b);
////	printf("The sum is %d",a+b);
//}



//a funnction with return type and parameter
int sum(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",sum(a,b));
	return 0;
	
}
int sum(int x,int y)
{
//	printf("%d",x+y);
	return x+y;	
}



