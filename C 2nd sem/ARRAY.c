// if a is an array then *a is the value of a[o]

#include<stdio.h>
int main()
{
	int a[10],i,n, sum = 0,avg=0;
	printf("Enter total number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for (i=0;i<n;i++)
	
	{
	scanf("%d",&a[i]);
	sum = sum+a[i];
//	printf("The sum is \n",sum);
	}
	printf("The sum is %d \n",sum);
	printf("The average is %f",(float)sum/n);
	
	return 0;
}
