#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int m;
    cin>> m;
    for(int i = 0;i<n;i++){
        vector<int>marks(m);
        for(int j=0;j<n;j++){
            cin>>marks[j];
        }
        cout<<"Student"<< i+1<<" ";
        for (int j= 0;j<m;j++){
            
            cout<< "Student "<<j+1<<"Marks"<<marks[j]<<" ";
            


        }
        cout<<endl;
    }

    return 0;

}