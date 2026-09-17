//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	float b = 3.456;
//	char c = 'e';
//	int* p1 = &a;
//	float *p2 = &b;
//	char *p3= &c;
//	
//	printf("%d %d %d \n",sizeof(a),sizeof(b),sizeof(c));
//	printf("%p %p %p \n",(void*)p1, (void*)p2,(void*)p3);
//	
//	return 0;
//	
//}
//
//#include<stdio.h>
//int fact(int *);
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	fact(&n);
//	
//}
//int fact (int *p)
//{
//	// write code for factorial
//}


//
//#include<stdio.h>
//
//void fact(int *);
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    
//    fact(&n);
//    printf("Factorial = %d", n);
//    
//    return 0;
//}
//
//void fact(int *p)
//{
//    int i, f = 1;
//
//    for(i = 1; i <= *p; i++)
//    {
//        f = f * i;
//    }
//
//    *p = f; // store result back in n
//}

//#include <stdio.h>
//int main(){
//	int *p1 = &a[0];
//	p1++;
//	printf("%d %d ",p1, *p1);
//	p--;
//	printf("%d %d ",p1, *p1);
//	int *p2 = &a[4];
//	printf("%d", p1 - p2);
//	return 0; 
//	
//}

#include <stdio.h>
int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int *p1 = a[0];
	printf("%d ", *p1);
	int *p2 = &a[4];
	printf("%d\n", *p2);
	p2 = p1;
	printf("%d %d ",*p1, *p2);
	return 0;
}
