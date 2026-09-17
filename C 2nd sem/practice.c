#include<stdio.h>

int main(){
	
	int marks[4][4] = {20, 40, 50, 70, 90, 95,10,20,30,40,50,06,40,30,20,40};
	
	int i = 0;
	int j = 0;
	
	
	for(i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf(" %d ",marks[i][j]);
			
		}
		printf("\n");
	}
	
////	printf("Value: %d \n", marks[4]);
////	
////	printf("English: %d \n", marks[0]);
////	printf("Maths : %d \n", marks[1]);
////	printf("Hindi: %d \n", marks[2]);
////	printf("Science: %d \n", marks[3]);
//
//
//	int i = 0;
//	
//	for (i=0 ; i<5 ; i++){
//		
//		printf("Marks[%d]: %d\n",i, marks[i]);
//	}
//	
	
	return 0;
}
