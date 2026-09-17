#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[5]= {12,14,56,13,34};
//     int mx = 0;
//     for(int i=0; i<5; i++){
//             if(arr[i]>mx){
//                 mx = arr[i];
//             }

//             cout<<mx<<"  "<<endl;
//         }


// }
   


 vector<int> getMinMax(vector<int> &arr){

        int n  = arr.size();
        int mx = 0;
        int mn = 1e9;
        for(int i=0; i<n;i++){
            if(arr[i]>mx){
                mx= arr[i];
            }

            
        }

        for(int i = 0; i<n;i++){
            if(arr[i]>mn){
                mn = arr[i];
            }
        }

        return{mn,mx};

        
    }