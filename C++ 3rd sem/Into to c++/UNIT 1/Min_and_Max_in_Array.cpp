#include<bits/stdc++.h>
using namespace std;

// int main(){


//     int mx = 0;
//     for(int i=0; i< arr.size(); i++){
//         if(arr{[i]>mx){
//             mx = arr[i];
//         }
//     }
//     return mx;




// }


class Solution {


  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int mx = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>mx){
                mx = arr[i];
            }

            cout<<mx<<"  "<<endl;
            
        }

    }
};



