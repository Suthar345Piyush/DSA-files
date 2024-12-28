// kth missing positive number
//brute approach
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr , int k){
  int n = arr.size();
  for(int i = 0; i<n; i++){
    if(arr[i]<=k) k++;
    break;
    else{
      return k;
    }
  }
  return 0;
}


// binary search approach 
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr , int k){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
      int mid = low + (high - low)/2;
      int missing  = arr[mid] - (arr[mid] + 1);
      if(missing < k){
        low = mid + 1;
      }
      else{
        high = mid - 1;
      }
    }
    return low + k;
}