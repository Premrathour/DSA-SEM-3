

// #include<iostream>
// #include<iomanip>
// using namespace std;

// // Without return type, without parameters 
// void display(){

//     cout<<"Hello";
// }

// int main(){

//     display();
//     //Name of the function

//     return 0;

// }

//without return type, with parameters...

// #include<iostream>
// using namespace std;

// void display(int a){       //parameters

//     cout<<a;

// }

// int main(){

//     display(34);    // arguments
//     return 0;
// }


// with return type, without parameters

// #include<iostream>
// using namespace std;

// int display(){

//     int a=10;
//     int b=20;
//     return a+b;
// }

// int main() 
// {
//     cout<< display();
//     return 0;
// }


// with parameters and with return type...

// #include<iostream>
// using namespace std;

// int display(int a, int b){
//     return a+b;
// }

// int main(){

//     cout<<display(10,20);
//     return 0;
// }

// waf that takes two values and return multiplication of both...

#include<iostream>
using namespace std;

void display();                   // declaration of  function

int display(int a, int b){

    return a*b;
}

int main(){

    int num1,num2;
    cin>> num1>>num2;
    cout<<display(num1,num2);
    return 0;
}