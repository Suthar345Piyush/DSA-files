//count elements with strictly smaller and  greater elements 

#include<bits/stdc++.h>
using  namespace std;

int countElements(vector<int>& nums){
  int n = nums.size();
  int ans = 0;

  int maxi = *max_element(nums.begin() , nums.end());
  int mini = *min_element(nums.begin() , nums.end());
  
  for(auto x: nums){
    if(x > mini && x < maxi){
      ans++; 
    }
  }
  return ans;
}
