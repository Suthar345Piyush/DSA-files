//friuts  into baskets  
//This question can be  solved like, max length subarray with at most 2 types of  numbers

#include<bits/stdc++.h>
using  namespace std;

int fruitBaskets(vector<int>& nums){
  int n = nums.size();
  int maxLen = 0;
  set<int> st;
  for(int i=0; i<n; i++){
     for(int j=i; j<n; j++){
      st.insert(arr[j]);
      if(st.size() <= 2)
        maxLen = max(maxLen , r-l+1);
      else break;
     }
  }
  return maxLen;
}


//time complexity = O(n*n) , space = O(3);


// optimized code 


#include<bits/stdc++.h>
using namespace std;


int fruitBaskets(vector<int>& nums , int k){
  int l=0;
  int r=0;
  int maxLen=0;
  map<int , int> mpp;
  while(r < n){
    mpp[nums[r]]++;
    if(mpp.size() > k){
       while(mpp.size() > k){
         mpp[nums[l]]--;
         if(mpp[nums[l]] == 0)
           mpp.erase(nums[l]);
           l++;
       }
    }
    if(mpp.size() <= k){
      maxLen = max(maxLen , r-l+1);
      r++;
    }
  }
 return maxLen;
}


//time complexity = O(2n) , space = O(3)






//more optimized code with tc = O(n) , space= O(1)
#include<bits/stdc++.h>
using namespace std;
int fruitBaskets(vector<int>& nums , int k){
  int l=0;
  int r=0;
  int maxLen=0;
  map<int , int> mpp;
  while(r < n){
    mpp[nums[r]]++;
    if(mpp.size() > k){
         mpp[nums[l]]--;
         if(mpp[nums[l]] == 0)
           mpp.erase(nums[l]);
           l++;
    }
    if(mpp.size() <= k){
      maxLen = max(maxLen , r-l+1);
      r++;
    }
  }
 return maxLen;
}