//#include<stdio.h>
//
//int main(){
//	
//	int A[10] = {1,2,3,4,5,6,7,8,9,10};
//	
//	int i = 0;
//	
//	for (i=0;i<10;i++){
//		
//		printf("A[%d]= %d \n",i,A[i]);
//	}
//	
//	return 0;
//}



//#include <stdio.h>
//
//int main(){
//	
//	int i, n;;
//	
//	printf("Enter the number of elemnts: \n");
//	scanf("%d",&n);
//	
//	int A[n];
//	
//	printf("Enter %d elements: \n",n);
//	for (i=0;i<n;i++){
//		scanf("%d",&A[i]);
//	}
//	printf("Array elements are: \n");
//	for (i=0 ;i<n;i++){
//		printf("%d ",A[i]);
//	}
//	
//	return 0;
//
//}




//#include<stdio.h>
//
//int main(){
//	
//	int i, n;
//	int sum = 0;
//	float average;
//	
//	printf("Enter the number of elements: \n");
//	scanf("%d", &n);
//	
//	int A[n];
//	
//	printf("Enter %d elements \n",n);
//	for (i=0;i<n;i++){
//		scanf("%d",&A[i]);
//		
//		sum += A[i];
//	}
//	
//	average = (float)sum/n;
//	
//	
//	printf(" Sum = %d \n",sum);
//	printf("Average = %.2f", average);
//	
//}




///////////////////////////////////////// BBUBLE SORT


//#include<stdio.h>
//
//int main(){
//	
//	int a[10],i,j,temp;
//	
//	printf("Enter the elemts of array : \n");
//	for (i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	
//	for(j=0;j<=9;j++){
//		for (i=0;i<=9;i++){
//			if (a[i]>a[i+1]){
//				temp = a[i];
//				a[i] = a[i+1];
//				a[i+1] = temp;
//			}
//		}
//	}
//	
//	printf("The sorted array is: \n");
//	for (i=0;i<=9;i++){
//		printf("%d ",a[i]);
//	} 
//	
//	return 0;
//}


/////////////////////////////////// Linear search


//#include<stdio.h>
//
//int main(){
//	
//	int a[10],i ,k=0;
//	int num;
//	
//	printf("Enter the elements of the array: \n");
//	for(i=0;i<=9;i++){
//		scanf("%d",&a[i]);
//	}
//	
//	printf("Enter the number to find: \n");
//	scanf("%d",&num);
//	
//	for(i=0;i<=9;i++){
//		if (a[i]==num){
//			k=1;
//			break;
//		}
//	}
//	
//	if(k==1){
//		printf("No found at location %d",i);
//	}
//	else {
//		printf("Number not found!!!");
//	}
//	
//	return 0;
//}





//#include<stdio.h>
//
//void printstr(char str[]){
//	
//	int i=0;
//	
//	while (str[i] != '\0'){
//		printf("%c",str[i]);
//		i++;
//	}
//}
//
//int main(){
////	char str[5]= "PREM";
//	char str[35]; 
//	gets(str);
//	printf("USING PRINTF: %s",str); 
////	printstr(str);
//	
//	return 0;
//}




#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr;
	ptr = (int *) malloc(3* sizeof(int));
	
	for (int i=0;i<3;i++){
		printf("Enter the value at %d of this array is %d:  \n");
		scanf("%d",&ptr[i]);
	}
}












