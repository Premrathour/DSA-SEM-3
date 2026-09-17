#include<stdio.h>
union student
{
	int rollno;
	float marks;
	
};
int main()
{   
	union student s;
	s.rollno = 101;
	printf("Roll no: %d \n",s.rollno);
	s.marks = 85.5;
	printf("Marks: %.2f \n",s.marks);
	
	printf("Roll No after assiging marks: %d \n",s.rollno);
	
	return 0;
	
}
