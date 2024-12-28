// find the last occurence of the target or key , if found then returns its index , if not then retrun -1;
//brute force

int printOccurences(vector<int>&arr , int n , int k){
  int ans = -1;
  for(int i = n - 1; i>=0; i++){
    if(arr[i] == k){
      ans = i;
      break;
    }
  }
  return ans;
}


//binary approach
//firstly we make first occurenaces 
#include<bits/stdc++.h>

int firstPosition(vector<int>&nums , int  n , int x){
  int low = 0;
  int high = n - 1;
  int first = -1;
  while(low <= high){
    mid = (low + high)/2;

    if(nums[mid] == x)
    first = mid , high = mid - 1;

    else if(nums[mid] > x)
    low = mid + 1;
    else high = mid - 1;
  }
  return first;
}

int lastPosition(vector<int>&nums , int n , int x){
  int low = 0 , high = n-1, last = -1;
  while(low <= high){
    mid = (low + high)/2;

    if(nums[mid] == x)
    last = mid , high = mid + 1;

    else if(nums[mid] < x)
    low = mid + 1;
    else high = mid - 1; 
  }
  return last;
}

pair<int , int>   firstAndLastPosition(vector<int>& nums, int n, int x){
    int first = firstPosition(nums , n , x);
    if(first == -1) return {-1 , -1};
    int last = lastPosition(nums , n , x);

    retrun {first , last};
}


// this code in java :

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start = findPosition(nums , target , true ); 
        int  end =   findPosition(nums , target , false );

        return  new int[] { start , end};
        
    }
    private int findPosition(int[] nums , int target , boolean findFirst ){
        int low  = 0;
        int high = nums.length - 1;
        int pos = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                pos = mid;
                if(findFirst)
                   high = mid - 1;
                else 
                   low = mid + 1;
            }

            else if(nums[mid] < target)
                   low = mid + 1;
            else 
                   high = mid - 1;
        }
        return pos;

    }
}
