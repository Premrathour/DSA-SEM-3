// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int>arr;
//     int n =  arr.size();
//     arr.push_back(22);
//     arr.push_back(66);
//     arr.push_back(77);

//     cout<<arr.size()<<endl;

//     for(int i=0; i < n ;i++){
//         cout<<arr[i]<<" ";

//     }
// }



#include<bits/stdc++.h>
using namespace std;

// int main(){
//     // int arr;
//     //vector<int>arr;

//     int arr[4]= {1,2,3,4};                    // WORKED
//     //int n =  arr.size();
//     int sum=0;
//     for (int i = 0;i<4 ;i++){
//         sum = sum + arr[i];

//     }
//     cout<< sum;
    
//     return 0;




// }


class solution{
    public:
    int arraySum(vector<int>&arr){
        int n = arr.size();
        int sum = 0;
        for (int i=0; i<arr.size();i++){
            sum = sum + arr[i];

        }
        return sum;
    }
};


