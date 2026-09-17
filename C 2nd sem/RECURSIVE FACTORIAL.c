// WAP to swap two number and demonstrate the difference between call by value  and call by reference by printing actual and swapped values


#include<stdio.h>
long long int factorial(int);                                          // function declaration
int main()
{
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	printf("Factorial of %d = %lld",n,factorial(n));                    // function calling
	return 0;
}

long long int factorial(int n)
{
	if (n ==0 ||  n == 1)
	return 1;
	else
	return n*factorial(n-1);
}



//FAAAAAAHHHH
