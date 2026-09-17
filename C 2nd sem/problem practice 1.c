#include<stdio.h>
int main()
{
	int celcius;
	printf("Enter the temperature in centius:");
	scanf("%d", &celcius);
	int faranehite = (celcius * 9/5) + 32 ;
	printf("The temperature in faranehite is %d:",faranehite);
	
	
	return 0;
	
}
