//contains duplicate 2 

#include<bits/stdc++.h>
using namespace std;

int duplicateTwo(vector<int>& nums , int k){
  int n = nums.size();
  int l  =0;
  int r=0;
  map<int , int> mpp;


//using the relation of window size and k 

  while(r<n){
      if(r-l == k+1) {
         mpp[nums[l]]--;

         if(mpp[nums[l]] == 0) {
            mpp.erase(nums[l]);
         }
         l++;
      }

      // we have to add new value into map 
      mpp[nums[r]]++;

      //check for duplicate value and also check for the window size and k constraint
      if(mpp[nums[r]] > 1 && r-l <= k) return true;
      r++;
  }
  return false;
}