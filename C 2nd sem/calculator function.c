#include<stdio.h>
int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);

int main(int x,int y){

int a,b;

scanf("%d%d",&a,&b);
printf("%d\n",sum(a,b));
printf("%d\n",sub(a,b));
printf("%d\n",mul(a,b));
printf("%d\n",div(a,b));
return 0;
}
int sum(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
