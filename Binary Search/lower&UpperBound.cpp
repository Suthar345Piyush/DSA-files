// lower bound in binary search algorithm means that fulfilling this condition: 
//arr[index] >= x , where x is the given value and arr[index] is that particular index number 

class Solution{
  public:
   int lowerBound(vector<int>&nums  , int x ){
       int n = nums.size();
       int low = 0;
        int high = n - 1;
        int ans = n;
        while(low <= high){
          int mid = (low + high)/2;
          if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
          }
          else{
            low = mid + 1;
          }
        }
   }
   return ans;
}


// for upper bound this is same just change the sign 

