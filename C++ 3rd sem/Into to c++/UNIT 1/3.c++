#include<iostream>
using namespace std;

class rectangle{

    private:

    int length;
    int width;

    public:


    void setter(int l,int b){
        length = l;
        width = b;

    }

    int get_length(){
        return length;

    }
    
    int get_width(){
        return width;

    }

    int area(){
        return length * width;
    }
    int perimeter(){
        return 2* (length + width);
    
    }  
};

int main(){
    rectangle rec;
    rec.setter(5,8);
    cout<<"Area: "<<rec.area()<<endl;
    cout<<"Perimeter: "<<rec.perimeter()<<endl;
}

