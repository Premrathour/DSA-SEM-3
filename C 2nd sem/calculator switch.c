#include<stdio.h>
int main()
{
	int a,b,result;
	char choice;
	printf("Enter two numbers\n ");
	scanf("%d%d", &a,&b);
	printf("Press + for addition \n press - for subtraction \n  press * for multiplication \n press / for division \n ");
	printf("Enter your choice");
	scanf(" %c",&choice);
	switch(choice)
	{
		case '+':
			result = a+b;
			printf("Addition is %d",result);
		break;
		
		case '-':
			result = a-b;
			printf("Subtraction is %d",result);
		break;
		
		case '*':
			result = a*b;
			printf("Multiplication is %d",result);
		break;
		
		case '/':
			result = a/b;
			printf("Division is %d",result);
		break;
		
		default:
			printf("Invalid");
			

	}
	return 0;
	
}
