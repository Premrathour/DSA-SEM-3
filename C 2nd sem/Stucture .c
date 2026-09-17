#include <stdio.h>
//struct student 
//{
//	char name[10] ;     // char *name 
//	int rollno;
//	float marks ;
//	
//}s1,s2,s3,s4,s5;
//
//int main ()
//{
//	strcpy(s1.name, "Sahil");      // s1.name = "Sahil"
//	s1.rollno = 10;
//	s1.marks = 6.8;
//	printf("Student details are: \n");
//	printf("%s  %d %f", s1.name, s1.rollno ,s1.marks);
//	
//	
//	strcpy(s2.name,"Kirat");
//	s2.rollno = 12;
//	s2.marks = 8.9;
//	printf(" \n %s %d %f", s2.name, s2.rollno, s2.marks);
	
	
	
	struct book{
		char name[100];
		int pages;
		float price;
	};
	
	
	int main()
	{   
	
//		struct book b1 = {"Malgudi days", 500, 400 };
//		struct book b2 = {"Prince Of Persia", 200, 100};
//		struct book b3 = {"Panchantantra", 100, 50}; 
//		
//		printf("%s %d %f \n", b2.name, b2.pages, b2.price);
//		printf("%s %d %f \n", b3.name, b3.pages, b3.price);
//		printf("%s %d %f \n", b1.name, b1.pages, b1.price);
////		strcpy(b1.name, "Malgudi days");
////		b1.pages = 200;
////		b1.price = 150;

		struct book b1,b2;
		
		printf(" \n Enter the details of first book: ");
		gets (b1.name); //  scanf("%s",b1.name);
		scanf("\n %f%d",&b1.price,&b1.pages);
		printf("%s \n %f \n %d \n " , b1.name , b1.price , b1.pages);
		
		
		
		struct emp{
			char *name;
			int  empid ;
			float salary ; 
			
		};	
	int main()
	{
		struct emp e[5];
		int i ;
		printf("Enter the details of 5 employees: ");
		for (i=0 ; i<5 ; i++);
		
	}
	
	return 0;
}
