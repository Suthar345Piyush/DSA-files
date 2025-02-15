//maximum points  you can obtain from card

#include<bits/stdc++.h>
using namespace std;

int maxPoints(vector<int>& arr , int k){
  int n = arr.size();
  int lSum = 0;

  for(int i=0; i<k; i++){
    lSum += arr[i];
  }

  int maxSum = lSum;
  int rSum = 0;

  for(int i=k-1; i>=0; i--){
    rSum += arr[n - (k-i)];
    lSum -= arr[i];
    maxSum = max(maxSum , lSum + rSum);
  }
  return maxSum;
}