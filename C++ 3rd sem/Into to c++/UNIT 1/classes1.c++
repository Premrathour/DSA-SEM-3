#include<iostream>
using namespace std;

// class student
// {
//     public:

//     string name;
//     int age;


// };




// int main(){
     
//     student s1;
//     s1.name = "Rahul";
//     s1.age = 21;

//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;

//     return 0;
// }

// create a class having data members as marks andd name of the student, print the details of the object of the class...

// class student
// {
//     public:

//     string name;
//     int age;
//     int phy_marks;
//     int chem_marks;
//     int maths_marks;

// };


// int main(){

//     student s1,s2;
//     s1.name = "Pratik";
//     s1.age= 21;
//     s1.phy_marks = 91;
//     s1.chem_marks= 86;
//     s1.maths_marks = 70;

//     // student s2;
//     s2.name = "Raman";
//     s2.age = 22;
//     s2.phy_marks = 88;
//     s2.chem_marks = 90;
//     s2.maths_marks= 77;

//     cout<<s1.name<<endl;
//     cout<<"Physics: "<<s1.phy_marks<<endl;
//     cout<<"chemistry: "<<s1.chem_marks<<endl;
//     cout<<"maths: "<<s1.maths_marks<<endl;

//     cout<<s2.name<<endl;
//     cout<<"Physics: "<<s2.phy_marks<<endl;
//     cout<<"chemistry: "<<s2.chem_marks<<endl;
//     cout<<"maths: "<<s2.maths_marks<<endl;

//     return 0;

// }


// class students 
// {
//     public:
//     string name;
//     int age;

//     void display()
//     {
//         cout<<name<<" " <<age<<endl;
//         // cout<<age<<endl;
        
//     }
// };


// int main(){

//     students s1,s2;

//     s1.name ="Rahul";
//     s1.age = 21;
//     s1.display();
    

//     s2.name = "Raman";
//     s2.age = 20;
//     s2.display();

    
    
    
    

//     return 0;
// }



//create a class car having data menmebers speed, and brand and a function to display the details of the cars, (create 2 objects)  .....


class cars
{
    public:
    string brand;
    int speed;


    void display(){

        cout<<"Name: "<<brand<<"          "<<"Speed: "<<speed<<"kmph"<<endl;
    }
};

int main(){
    cars c1,c2;

    c1.brand = "Maruti";
    c1.speed = 100;
    c1.display();

    c2.brand = "Toyota";
    c2.speed = 120;
    c2.display();

    return 0 ;
}