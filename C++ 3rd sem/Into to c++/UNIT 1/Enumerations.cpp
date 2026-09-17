#include<bits/stdc++.h>
using namespace std;

enum days{
    Monday=100,Tuesday=200,Wednesday=300,Thursday=400,Friday=500,Saturday=900,Sunday=0


};

enum error{
    not_found = 404,
    server_crash = 500,
    check_your_connectivity =300,
};

enum gender{
    Male,Female,others

};

enum trafic_light{
    Red,Yellow,Green

};


int main(){
    days today = Thursday;
    error nt_fnd = not_found;
    cout<<nt_fnd<<endl;
    cout<<today<<endl;
}