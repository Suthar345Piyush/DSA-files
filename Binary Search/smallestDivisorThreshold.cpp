//Find  a smallest divisor , given a  threshold
//brute approach to solve the  prblm 

#include<bits/stdc++.h>
using namespace std;

int smallestNumber(vector<int> &nums , int limit){
  int n = nums.size();

  int maxi = max(nums.begin() , nums.end());
  for(int d=1; d<=maxi; d++){
    int sum = 0;
    for(int i=0; i<n; i++){
      sum += ceil((double)(nums[i])/ (double)(d));
    }
    if(sum <= limit)
    return d;
  }
  return -1;
}


// optimal approach using  binary search 

#include<bits/stdc++.h>
using namespace std;

int sumByD(vector<int> &arr , int  div){
  int n = arr.size();

  int sum = 0;
  for(int i = 0; i<n; i++){
    sum += ceil((double)(arr[i]) / (double)(div));
  }
  return sum;
}

int smallestDivisor(vector<int>& arr , int limit){
  int n = arr.size();
  if(n > limit) return -1;

  int low = 1;
  int high = max(arr.begin() , arr.end());

  while(low <= high){
    int mid = low + (high - low)/2;
    if(sumByD(arr , mid) <= limit){
      high = mid - 1;
    }
    else{
      low = mid + 1;
    }
  }
  return low;
}