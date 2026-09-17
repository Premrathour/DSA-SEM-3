// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//     int n1;
//     cin >> n1;
//     vector<int> arr1(n1);
//     for(int i=0;i<n1;i++){
//         cin>> arr1[i];


//     }
//     int n2;
//     vector<int>arr2(n2);
//     for(int i=0;i<n2;i++){
//         cin>> arr2[i];

//     }
//     for(int i=0;i<n2;i++){
//         arr1[i]=arr1[i] + arr2[i];
//     }
//     for(int i=0;i<n1;i++){
//         cout<<arr1[i]<<" ";
       

//     }


    
    
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    cin >> n1;

    vector<int> arr1(n1);

    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;

    vector<int> arr2(n2);

    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    if(n1 != n2) {
        cout << "Arrays must have the same size";
        return 0;
    }

    for(int i = 0; i < n1; i++) {
        arr1[i] = arr1[i] + arr2[i];
    }

    for(int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}