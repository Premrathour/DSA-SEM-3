#include<stdio.h>
int main()
{
	int x = 5, y = 6 ;
	int a = x & y;
	int b = x | y;
	int c = x ^ y;
	printf("%d\n%d\n%d", a,b,c);
	return 0 ;
}
