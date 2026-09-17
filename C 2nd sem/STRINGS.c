// WAP too input your name and print it on screen using
//scanf(), gets(),fgets()

#include<stdio.h>
int main(){

char name[50];
fgets(name ,50, stdin);
int i=0;
while (name[i] != '\0'){
	printf("%c",name[i]);
	i++;
	
}
	
	return 0;
}
