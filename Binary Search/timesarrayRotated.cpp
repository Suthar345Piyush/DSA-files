// no. of times array is being roteted.
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums , int n){
  int low = 0 , high = n - 1;
  int ans = INT_MAX;
  int index = -1;
  while(low <= high){
     int mid  = (low + high)/2;
     if(nums[low] <= nums[high]){
        if(nums[low] < ans){
          index = low;
          ans = nums[low];
        }
        break;
     }
     // if left part is sorted 
     if(nums[low] <= nums[mid]){
      if(nums[low] < ans){
        index = low;
        ans = nums[low];
      }
      // eliminate the left half
      low = mid + 1;
     }

     // if right part is sorted
     else{
       if(nums[mid] < ans){
        index = mid;
        ans  = nums[mid];
       }
       // eliminate the right half
       high = mid - 1;
     }
  }
  return index;
}

