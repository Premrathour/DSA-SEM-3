#include<bits/stdc++.h>
using namespace std;

class KJ{

    public:
    int id;
    string name;

    inline void give_CA(){                             // INLINE FUNCTION
        cout<<"Write CA"<<endl;
    }

};

void KJ:: give_CA(){                               //Non INLINE FUNCTION
    cout<<"Write CA"<<endl;
}

int main(){
    KJ Aditya;
    Aditya.give_CA();

    return 0;
}