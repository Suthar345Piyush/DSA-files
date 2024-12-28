// square  of  the  given number
// brute  force approach 
#include<bits/stdc++.h>
using  namespace std;

int floorSqrt(int n){
  int ans = 0;

  for(long long i=1; i<=n; i++){
    long long val = i*i;
    if(val <= n*1ll){
      ans = i;
    }
    else{
      break;
    }
  }
  return ans;
}

// using  binary search 
#include<bits/stdc++.h>
using namespace std;

int  floorSqrt(int n){
  int  low = 1 , high = n;
  int ans = 1;
  while(low <= high){
    int mid = low + (high - low)/2; 
    // to avoid  overflow use mid like this 
    
  
    if(mid <= n/mid){
      ans = mid;
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return ans;
}
