// Capacity to ship package within D Days
// brute force solution 

#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int>& weights , int cap){
    int n = weights.size();
    int load = 0;
    int days = 1;
    for(int i=0; i<n; i++){
       if(load+weights[i] > cap){
         days++;
         load = weights;
       }
       else{
        load = load + weights[i];
       }
    }
    return days;
}

int leastWeightsCapacity(vector<int> &weights , int d){
  int maxi = *max_element(weights.begin() , weights.end());
  int sum =  accumulate(weights.begin() , weights.end() , 0);
  
  for(int i=maxi; i<sum; i++){
     if(findDays(weights , i) <=  d){
      return i;
     }
  }
  return -1;
}



// binary search solution

#include<bits/stdc++.h>
using namespace std;

int  findDays(vector<int>& weights , int cap){
  int n = weights.size();
  int load = 0;
  int days = 1;

  for(int i=0; i<n; i++){
    if((load + weights[i]) > cap){
       day++;
       load = weights[i];
    }
    else{
      load = load + weights[i];
    }
  }
  return days;
}

int leastWeightCapacity(vector<int> &weights , int days){
  int maxi = *max_element(weights.begin() , weights.end());
  int sum = accumulate(weights.begin() , weights.end() , 0);

  int low = maxi;
  int high = sum;
  while(low <= high){
    int mid = low + (high - low)/2;
    int noOFDays = findDays(weights , mid);
    if(noOFDays <= days){
      // eliminate right side
      high = mid - 1;
    }
    else{
      low = mid + 1;
    }
  }
  return low;
}
