#include<stdio.h>
int main()
{
	int a,b,result, choice;
	printf("Enter two numbers\n ");
	scanf("%d%d", &a,&b);
	printf("Enter your choice\n Press 1 for addition\n 2 for subtraction \n 3 for multiplication \n 4 for division \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			result = a+b;
			printf("Addition is %d",result);
		break;
		
		case 2:
			result = a-b;
			printf("Subtraction is %d",result);
		break;
		
		case 3:
			result = a*b;
			printf("Multiplication is %d",result);
		break;
		
		case 4:
			result = a/b;
			printf("Division is %d",result);
		break;
		

	}
	return 0;
	
}
