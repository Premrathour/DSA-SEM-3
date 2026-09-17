#include<bits/stdc++.h>
using namespace std;

class KJ{

    public:

    KJ(){                                                                              ///This is the Constructor

        cout<<"Constructor Called Automatically"<<endl;
    }

    void sum(int a,int b){
        cout<<a+b<<endl;
    }


    void sum (int a, int b, int c, int d){
        cout<<a+b+c+d<<endl;
    }
};
class accesories{
    public:
    //Defaul/Simple Constructor
    accesories(){                                                                // Constructor as the same name of the class
        cout<<"HELLO THIS IS PUSHKAR"<<endl;
    }

    // Parameterised Constructor
    accesories(int price,string brand){     
        cout<<price<<endl;
        cout<<brand<<endl;

    }
};




int main(){
    KJ obj;
    accesories laptop(67890,"APPLE");
    // obj.sum(2,88);
    // obj.sum(54,1,1,1);

    return 0;
}