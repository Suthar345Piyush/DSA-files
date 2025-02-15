//contains duplicate 
#include<bits/stdc++.h>
using namespace std;

int duplicates(vector<int>& nums){
  int n = nums.size();
  map<int , int> mpp;

  for(int i=0; i<n; i++){
    mpp[nums[i]]++;
    if(mpp[nums[i]] >= 2) return true;
  }
  return false;
}

int main(){
   vector<int> nums = {1 , 2 , 3 , 0};
   cout << duplicates(nums) << endl;
   return 0;
}