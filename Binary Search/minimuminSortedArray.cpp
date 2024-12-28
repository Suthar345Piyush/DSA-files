// Minimum In Rotated sorted array.
// if the left half of the array is not sorted then the right half of the array is sorted , this principle works for the rotated sorted array 
#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums){
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = INT_MAX;
  while(low <= high){
     int mid  = (low + high)/2;
     if(nums[low] <= nums[mid]){
        ans = min(ans , nums[low]);
        low = mid + 1;
     }
     else{
      ans = min(ans, nums[mid]);
      high = mid - 1;
     }
  }
  return ans;
}
