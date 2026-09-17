#include<iostream>
using namespace std;

int main(){

    // int testcases;
    // cin>> testcases;
    // while(testcases--){

    string w;
    cin>> w;
    int size = w.size();
    // cout<<w[0]<<size - 2<<w[size-1];  

    if(size<=10){
        cout<<w<<endl;

    }
    else{
        cout<< w[0]<<size - 2<< w[size-1];
    }
    // }

    return 0;

}