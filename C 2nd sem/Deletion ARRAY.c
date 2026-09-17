#include<stdio.h>
int main()
{
	int a[10],i,position,n;
	printf("Enter total elememnts");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++);
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the location you wish to delete\n");
	scanf("%d",position);
	for (i=position-1;i<n;i++)
	{
		a[i]= a[i+i];
	}
	printf("array elements after deletion are: \n");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	return 0;
	
}
