#include<bits/stdc++.h>
using namespace std;

int longestSubArrayInArray(vector<int> &arr, int k){
  int n = arr.size();
  int left = 0 , right = 0;
  int maxlen = 0;
  int long long sum = arr[0];


  while(right < n){
    while(left <= right && sum > k){
      sum = sum - arr[left];
      left++;
    }
    if(sum == k){
      maxlen = max(maxlen, left + 1 - right);
    }
    right++;
    if(right < n)  
    sum += arr[right];
  }
  return maxlen;

}