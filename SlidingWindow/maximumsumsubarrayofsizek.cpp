//sliding  window technique start 
//maximum sum subarray of size k 

#include<bits/stdc++.h>
using  namespace std;

int maxSumSubarray(int arr[] , int n , int k){
  int i=0;
  int j=0;
  int sum = 0;
  int maxSum = INT_MIN;
  while( j < n ){
    sum += arr[j];
    if(j-i+1 < k){
      j++;
    }
    else if(j-i+1 == k){
      maxSum = max(maxSum , sum);
      sum -= arr[i];
      i++;
    }
  }
  return maxSum;
}
