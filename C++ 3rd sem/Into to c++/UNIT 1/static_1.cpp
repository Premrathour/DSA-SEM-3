#include<bits/stdc++.h>
using namespace std;

class KJ{
    public:
    string name;
    int roll_no;
    static int count;


    KJ(){
        count++;
        cout<< "The Object number is "<<count<<endl; 
    }

};
int KJ :: count = 0;
int main(){
    KJ Aditya;
    Aditya.name="HELLO";
    KJ HERO;
    KJ hee;
    cout<<Aditya.name<<endl;

}