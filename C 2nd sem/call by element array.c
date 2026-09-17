//#include <stdio.h>
//
//void modifyValue(int a, int b, int c) {
//    a = a + 10;
//    b = b + 10;
//    c = c + 10;
//
//    printf("Inside function (Call by Value):\n");
//    printf("%d %d %d\n", a, b, c);
//}
//
//int main() {
//    int arr[3] = {1, 2, 3};
//
//    printf("Before function call:\n");
//    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//
//    modifyValue(arr[0], arr[1], arr[2]);
//
//    printf("After function call:\n");
//    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
//
//    return 0;
//}


//#include<stdio.h>
//void f1(int a[]);
//int main()
//{
//	int a[]={1,2,3,4,5};
//	int count= sizeof(a)/sizeof(a[0]);
//	printf("%d",count);
//	f1(a);
//	
//}
//void f1(int a[])
//{
//	int c,i;
//	c = sizeof(a)/4;
//	printf("Size of an Array in main functtion %d \n",c);
//	printf("Array elements are: \n");
//	for (i=0;i<c;i++)
//	{
//		printf("%d",a[i]);
//	}
//}



//wap to calcuate average of the given elements of the array 
//wap to buuuble sort the array 
//wap to calculate the sum of all even element by passing entire array to a function
//wap to sort the array in descending order by passing array to a function







//wap to calculate the sum of all even element by passing entire array to a function
//#include <stdio.h>
//
//
//int sumEven(int arr[], int n) {
//    int i, sum = 0;
//
//    for(i = 0; i < n; i++) {
//        if(arr[i] % 2 == 0) {
//            sum += arr[i];
//        }
//    }
//
//    return sum;
//}
//
//int main() {
//    int arr[100], n, i, result;
//
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//
//    printf("Enter elements:\n");
//    for(i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    
//    result = sumEven(arr, n);
//
//    printf("Sum of even elements = %d", result);
//
//    return 0;
//}


//wap to sort the array in descending order by passing array to a function

#include <stdio.h>


void sortDescending(int arr[], int n) {
    int i, j, temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {  
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    sortDescending(arr, n);

    
    printf("Array in descending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



