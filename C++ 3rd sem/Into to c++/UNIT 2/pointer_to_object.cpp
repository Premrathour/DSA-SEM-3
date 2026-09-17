#include<bits/stdc++.h>
using namespace std;


class secctionKJ{
    public:
    string name;
    int roll_no;
};

int main(){        

    secctionKJ aditya;
    secctionKJ *ptr = &aditya;
    (*ptr).name = "Aditya Gupta";
    ptr->name = "Aditya Gupta";
    ptr->roll_no = 03;
    (*ptr).roll_no = 03;
    cout<<ptr<<endl;
    cout<<aditya.name<<endl;
    cout<<ptr->roll_no<<endl;

    return 0;
}