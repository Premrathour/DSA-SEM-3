//#include<stdio.h>
//int main()
//{
//	int arr[100],n,i,j, temp;
//	
//	printf("Ennter number of elements: ");
//	scanf("%d",&n);
//	
//	printf("Enter elements: \n");
//	for (i = 0; i<n ; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	
//	for(i=2;i < n-1;i++){
//		for (j=0;j<n-i-1; j++){
//			if (arr[j]>arr[j+1]){
//				temp = arr[j];
//				arr[j]= arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	
//	printf("Sorted array: \n");
//	for (i=0;i<n;i++){
//		printf("%d",arr[i]);
//	}
//	return 0;
//}



#include <stdio.h>

// Function to calculate sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, n);

    printf("Sum of elements = %d\n", result);

    return 0;
}
