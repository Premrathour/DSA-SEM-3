#include<stdio.h>

int balance = 1000;

void checkBalance ()
{
	printf("Current Bank Balance: %d\n", balance);
}
void deposite()
{
	int amount;
	printf("Enter amount to deposite: ");
	scanf("%d",&amount);
	balance = balance + amount;
	printf("Updated Balance: %d\n", balance);
	
}

int main()
{
	int choice;
	char again;
	
	do 
	{
		
		printf("\n-- Bnaking Menu -- \n ");
		printf("1. Check Balance \n");
		printf("2. Deposite Money\n ");
		scanf("%d", &choice);
		
		switch (choice)
		{
			case 1:
				checkBalance();
				break;
				
			case 2:
				deposite();
				break;
				
			default:
				printf("Invalid Choice \n");
		}
		
		printf("\n Do you want to perform another operation? (y/n) ");
		scanf("%c",&again);
	}while (again== 'y' || again == 'Y');
	
}
