#include<bits/stdc++.h>

using namespace std;

class sectionKJ{
    public:
    static int count;


    sectionKJ(){
        count ++;
        string name;
        // cout<<"Constructor called for the "<<count<<"  object"<<endl;
    }

    static void Pushar_fun(){
        cout<<count<<endl;
    }

    // string name;
    // void give_ca(){
    //     cout<<"Write CA"<<endl;
    // }
};

int sectionKJ::count=0;
// void sectionKJ ::Pushar_fun()

int main(){
    sectionKJ ::Pushar_fun();
    sectionKJ Aditya;
    sectionKJ nischal;
    sectionKJ Pushkar;
    sectionKJ ::Pushar_fun();

    // Aditya.name = "Aditya Yadav";
    // nischal.name = "Nischal Samadhiya";
    // Pushkar.name = "Pushkar Singh";

    // cout<< Pushkar.name<<endl;
}