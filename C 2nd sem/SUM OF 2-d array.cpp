//WAP to find sum of all elements of a 2-d array

#inlcude<stdio.h>
int main()
{
	int r,c,i,j,sum=0;
	printf("Enetr the number of rows \n");
	scanf("%d",&r);
	printf("Enteer the number of columns");
	scanf("%d",&c);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Arrat elements shown as matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=o;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
		
	}
	
	printf("Calculate the sum");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum = sum+a[i][j];
		}
	}
	printf("The sum is %d",sum);
}
