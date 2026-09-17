#include<iostream>
using namespace std;


class accessories{
    public:
    int cost;
    string brand;



    void set(string name, int paise){

        brand = name;
        cost= paise;
    }

    string get(){
        return brand;

    }

    int get2(){

        return cost;
    }




};             // We have defined our own datatype; 



int main(){

    accessories laptop;
    laptop.set("ASUS",5678);
    cout<<laptop.get2()<<endl;
    cout<<laptop.get()<<endl;



    laptop.cost = 123455665;
    laptop.brand = "ASUS";

    // cout<<laptop.cost<<endl;
    // cout<<laptop.brand<<endl;


    return 0;
}