#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 12;
    int nums[5]= {12,12,23,23,24};
    int n = nums.size();
    for(int i=0; i < n ;i++){

        if(x == nums[i]){
            return i;
            break;
        }
    }

    for(int i = n-1; i>=0; i--){
        if(x == nums[i]){
            return i;
            break;
        }
    }

}





int n = nums.size();
    int first_indx = -1;
    int last_indx  = -1;
    for (int i=0; i< n ;i++){
        if(nums[i]==target){
            first_indx = i;
            break;
        }
         
    }
    
    for(int i=n-1;i>=0;i--){
        if(nums[i]==target){
            last_indx = i;
            break;
        }
    }
    return{first_indx,last_indx};