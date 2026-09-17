
#include<bits/stdc++.h>
using namespace std;

union data{
    int i;
    float f;
    bool b;

};

int main(){
    data d;
    d.i = 77;
    d.f =  99.99;
    cout<<d.i<<endl;
    cout<<d.f<<endl;

}