// maximaum subarray sum or kadane;s algorithm:

#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){


  long long sum = 0 , maxi = INT_MIN;
  for(int i =0; i<n;i++){
    sum += arr[i];



    if(sum > maxi){
      maxi = sum;
    }

  


   if(sum > 0){
    sum = 0;
   }
  }
}