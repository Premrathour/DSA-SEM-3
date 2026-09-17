//WAP to find sum of all elements of a 2-d array
//
//#include<stdio.h>
//int main()
//{
//	int a,r,c,i,j,sum=0;
//	printf("Enetr the number of rows \n");
//	scanf("%d",&r);
//	printf("Enteer the number of columns");
//	scanf("%d",&c);
//	for (i=0;i<r;i++)
//	{
//		for (j=0;j<c;j++)
//		{
//			scanf("%d",a[i][j]);
//		}
//	}
//	
//	printf("Array elements shown as matrix \n");
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			printf("%d",a[i][j]);
//		}
//		printf("\n");
//		
//	}
//	
//	printf("Calculate the sum");
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			sum = sum+a[i][j];
//		}
//	}
//	printf("The sum is %d",sum);
//}



// This program calculates the sum of all elements in a 2D array.

//#include <stdio.h>
//
//int main() {
//    int rows, cols;
//    printf("Enter the no. of rows: ");
//    scanf("%d", &rows);
//    printf("Enter the no. of columns: ");
//    scanf("%d", &cols);
//
//    int array[rows][cols];
//    int sum = 0;
//    printf("Enter the elements of the array:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            scanf("%d", &array[i][j]);
//            sum += array[i][j];
//        }
//    }
//    printf("The sum of all elements in the 2D array is: %d\n", sum);
//    return 0;
//}

//// Sum of only diagonal elements in a 2D array.
//#include <stdio.h>
//
//int main() {
//    int rows, cols;
//    printf("Enter the no. of rows: ");
//    scanf("%d", &rows);
//    printf("Enter the no. of columns: ");
//    scanf("%d", &cols);
//    int array[rows][cols];
//    int sum = 0;
//    printf("Enter the elements of the array:\n");
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            scanf("%d", &array[i][j]);
//            if (i == j) {
//                sum += array[i][j];
//            }
//        }
//    }
//    printf("The sum of diagonal elements in the 2D array is: %d\n", sum);
//    
//    return 0;
//}


// WAP to finf the transpose of a matrix
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[100][100], transpose[100][100];

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding transpose
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transpose matrix
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
