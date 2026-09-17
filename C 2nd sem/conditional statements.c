#include<stdio.h>
int main()
//{
//	int n;
//	scanf("&d", &n);
//	if (n>=5)
//	printf("Eligible");
//	else 
//	printf("Not eligible");
//	
//	return 0;	
//}

//{
//	int n;
//	scanf("%d", &n);
//	if(n % 2 == 0)
//	printf("Even  and  the sqaure is %d", n*n);
//	else
//	printf("Odd and the cube is %d", n*n*n);
//	
//	return 0;
//	
//}
//
//{
//	int n;
//	scanf("%d", &n);
//	if (n>=90)
//	{
//		printf("O");
//		
//	}
//	else if(n>=80 && n<90)
//	printf("A+");
//	
//	return 0;
//}

//{
//	int salary;
//	scanf("%d", &salary);
//	int bonus=0;
//	bonus = salary *(float)(20.0/100);
//	printf("%d", bonus);
//	
//	
//	return 0;
//	
//	
//}

{
	char ch;
	scanf("%c", &ch);
		
	if (ch == 'r' || ch == 'R')
	printf("Stop");
	else if(ch == 'y' || ch == 'Y')	
	printf("Wait");	
	else if(ch == 'g' || ch == 'G')
	printf("Go");
	else
	printf("No signal");	

	return 0;

}



