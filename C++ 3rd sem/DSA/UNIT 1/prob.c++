class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        int mx =0;
        
        for(int i = 0; i < n; i++){
            if(arr[i]>mx){
                mx = arr[i];
            } 
            
        }
        for (int i=0;i<n;i++){
            if(arr[i]==mx){
                arr[i]=0;
            }

        }

        int nd_max = 0;
        for(int i=0;i<n;i++){
            if(nd_max<arr[i]){
                nd_max=arr[i];
            }
        }
        if (nd_max == 0)
        return -1;

        
    }
    
};