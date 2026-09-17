#include<bits/stdc++.h>
using namespace std;

// class students{

//     public:

//     string name;
//     int marks;
//     int roll_no;

//     students(string name,int marks,  int roll_no){
//         name = name;
//         marks = marks;
//         roll_no = roll_no;
//     }
//     students(){
//         this->name = name;
//         this->marks = marks;
//         this->roll_no = roll_no;

//     }

//     void diaplay(){
//         cout<<name<<endl;
//         cout<<marks<<endl;
//         cout<<roll_no<<endl;
//     }

// };

// int main(){
//     students pushkar;
//     pushkar.name= "Hello";
//     pushkar.marks= 100;
//     pushkar.roll_no= 3;
//     pushkar.diaplay();
// }





// class rectangle{

//     public:
//     int l;
//     int b;

//     rectangle(int l, int b){
//         this->l = l;
//         this->b = b;
//     }

//     int area(){
//     return  l*b;
//     }

//     // int area(side){
//     //     return side*l*b;
//     // }
// };

// int main(){
//     rectangle rec(10,20);
//     // cout<<rec.area(10)<<endl;
//     // ap.area(10,20);
// }




class bank{
    public:
    int acc_no;
    string name;
    int balance;

    bank(){

    }

    bank(int acc_no, string name, int balance){

        this->acc_no = acc_no;
        this->name = name;
        this->balance = balance;

    }

    void deposite(){
        cout<<balance<<endl;
    }
    void deposite(int amount){
        cout<<amount + balance<< endl;

    }
    void deposite (double amount){
        cout<<amount<<endl;
    }

};

int main(){
    bank sbi(3456789,"Pushkar",3456789);
    sbi.deposite();
    // bank debit;
    // debit.deposite();

}