#include <bits/stdc++.h>
using namespace std;



int main(){

    vector<int> arr;
    arr.push_back(88);
    arr.push_back(77);
    arr.push_back(56);

//     cout<<arr[0]<<endl;
//    cout<<arr[1]<<endl;
//    cout<<arr[2]<<endl;

    arr.push_back(55);
    arr.push_back(76);
    arr.push_back(81);

    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;
    // cout<<arr[5]<<endl;

    cout<<arr.size()<<endl;

    // Travellling an Vector...

    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}