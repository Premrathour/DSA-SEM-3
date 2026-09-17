#include<bits/stdc++.h>
using namespace std;


int main(){
    int a = 10;
    int b =  20;
    int *p = &a;

    p = &b;
    *p = 100;
    cout<<b<<endl;
    


    return 0;
}