#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter the number of values: ");
	scanf("%d",&n);
	int *ptr;
	ptr = (int*) calloc (n, sizeof (int));
	for (i=0; i<n ; i++){
		scanf("%d",ptr+i);
	}
	printf("Values are \n");
	for (i = 0; i<n ; i++){
		printf("%d",*(ptr+i));
		
	}
	printf("Values are: \n");
	for (i=0;i<n;i++){
		printf("%d",ptr[i]);
	}
	
	int ns;
	printf("enter the new size: ");
	scanf("%d",&ns);
	ptr = (int*) realloc(ptr, ns*sizeof(int));
	printf("Enter the new value: ");
	for(i=n ; i<ns; i++)
	{
		scanf("%d",*(ptr+i));
		
	}
	printf("\n New value: ");
	for  (i=0;i<ns;i++)
	{
		printf("%d",*(ptr+i));
	}
	printf("All values : ");
	for (i=0; i<ns;i++);
	{
		printf("%d",*(ptr+i));
	}
	
	free (ptr);
	
	
}



//main(){
//
//int a[5] = {1,2,3,4,5};
//int *p;
//p = &a[0];
////a = p;
//printf("%d",*p);
//p++;
//printf("%d",*p);
//}



#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,loc = -1,target;
	scanf("%d",&n);
	
	int *ptr = (int*)calloc(n,sizeof(int));
	for ( int i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	printf("enter the  element to search: ");
	scanf("%d",&target);
	for(int i=0;i<n;i++){
		if (*(ptr*i)==target)
	{
		loc = i;
		break;
	}
}
if (loc == -1){
	printf("Element not found \n");
	
}
else {
	printf("element found at index %d \n",loc);
	
}
free (ptr);
return 0;
	
}
