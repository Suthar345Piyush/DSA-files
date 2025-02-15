//count the  number of nice subarray 
// same  as binary subarray with sum 

#include<bits/stdc++.h>
using  namespace std;

int niceSubarray(vector<int>& nums , int k ){
  int n = nums.size();
  int count = 0;
  int sum = 0;

  unordered_map<int , int> mpp;
  mpp[0] = 1;

  for(int i=0; i<n; i++){
    sum += nums[i]%2;
    count += mpp[sum - k];
    mpp[sum]++;
  }
  return count;
}

int main(){
  vector<int> nums = {2,2,2,1,2,2,1,2,2,2};
  int k = 2;
  cout << niceSubarray(nums , k) << endl;
  return 0;
}


