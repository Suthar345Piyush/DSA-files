// koko eating banana 
// using ceil function to get the  minimum of k
// brute  force  approach
// always  consider the ceil value  of the  time to eat
#include<bits/stdc++.h>
using  namespace std;

int findMax(vector<int> &v){
  int maxi = INT_MIN;
  int n = v.size();
   for(int i = 0; i<n; i++){
    maxi = max(maxi , v[i]);
   }
   return maxi;
}

// calculating  total hours 

int totalHours(vector<int> &v , int hourly){
  int  totalH = 0;
  int n = v.size();
  for(int i = 0; i< n; i++){
    totalH += ceil((double)(v[i]) / (double)(hourly));
  }
  return totalH;
}

int minimumRateToEatBananas(vector<int> v , int h){
  int maxi = findmax(v);
  for(int i = 1; i<= maxi; i++){
    int reqTime = totalHours(v , i);
    if(reqTime <= h){
      return i;
    }
  }
  return maxi;
}

// binary search approach 

#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v){
  int  maxi = INT_MIN;
  int  n = v.size();
  for(int i =0; i< n; i++){
    maxi = max(maxi , v[i]);
  }
  return maxi;
}

int totalHours(vector<int> &v , int hourly){
  int totalH = 0;
  int n = v.size();
  for(int i = 0; i<n; i++){
    totalH += (v[i] + hourly - 1)/hourly;
  }
  return totalH;
}
int minimumRateToEatBananas(vector<int> &v , int h){
   // some  edge  cases
   if(v.empty() || h < v.size()){
    return -1;
   }
  int low = 1;
  int high = findMax(v);

  while(low <= high){
    int mid = low + (high - low)/2;
    int reqTime = totalHours(v , mid);
    if(reqTime <= h){
      high = mid;
    }
    else{
      low = mid + 1;
    }
  }
  return low; 
}


