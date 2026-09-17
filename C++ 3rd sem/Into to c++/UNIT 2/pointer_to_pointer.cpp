#include<bits/stdc++.h>
using namespace std;

int main(){
    // char ch = 'A';
    // char *p = &ch;
    // cout<<p<<endl;
    // void *ptr = &ch;
    // cout<<static_cast<char*>(ptr)<<endl;
    // // cout<<*ptr<<endl;

    int x = 22;
    int *pt = &x;
    cout<<pt<<endl;
    void *ptrr =&x;
    cout<<static_cast<int*>(ptrr)<<endl;



    // int x = 10;
    // int *ptr = &x;
    // int **ptr2ptr = &ptr;
    // cout<<x<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr2ptr<<endl;
    // cout<<**ptr2ptr<<endl;


    return 0;
}


