#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 22;
        int *ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<*ptr<<endl;
    a = 33;
    cout<<a<<endl;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    // char ch = 'A';
    // char *ptr_ch = &ch;
    // cout<<ptr_ch<<endl;



    return 0;


    
}
