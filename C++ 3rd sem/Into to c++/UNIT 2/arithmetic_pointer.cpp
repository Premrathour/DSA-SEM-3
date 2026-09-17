#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5]={10,50,13,8,6};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<arr[0]<<endl;
    cout<<*(ptr+3)<<endl;
    //pointer is pointing to the first element of the array

    return 0;
}