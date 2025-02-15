//binary sub array with sum using  sliding window
#include<bits/stdc++.h>
using  namespace std;

int subarraySum(vector<int>& nums , int goal){
   int n = nums.size();
   int count = 0;
   int sum = 0;
   int l=0;
   int r=0;
   while(r <n){
     sum += nums[r];
     while(sum > goal){
      sum -= nums[l];
      l++;
     }
     if(sum == goal){
      count++;
     }
     r++;
   }
   return count;
}

int main(){
  vector<int> nums = {1 , 0, 1 , 0 , 1};
  int goal = 2;
  cout << subarraySum(nums , goal) << endl;
  return 0;
}


//another way to do this  

#include<bits/stdc++.h>
using  namespace std;

int subarraySum(vector<int>& nums , int goal){
   int n = nums.size();
   int count = 0;
   int sum = 0;
   int l=0;
   int r=0;

   while(r < n){
    sum += nums[r];

    while(l <= r && sum > goal){
      sum -= nums[l];
      l++;
    }

    int tempLeft = l;
    int tempSum = sum;
    while(tempLeft < r && tempSum == goal){
      count++;
      tempSum -= nums[tempLeft];
      tempLeft++;
    }
   }
   return count;
}