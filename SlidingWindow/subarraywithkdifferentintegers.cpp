//Subrarray with k diffrent integers 
//brute  force solution , tc=O(n^2) , sc=O(n)

// #include<bits/stdc++.h>
// using  namespace std;


// int differentIntegers(vector<int>& nums , int k){
//    int cnt  = 0;
//    int n = nums.size();

//    for(int i=0; i<n; i++){
//       map<int , int> mp;
//       for(int j=i; j<n; j++){
//         mpp[nums[j]]++;

//         if(mpp.size() == k) cnt++;
//         else if (mpp.size() > k) break;
//       }
//    }
//    return cnt;
// }

//using  sliding  window  

#include<bits/stdc++.h>
using  namespace std;

int differentIntegers(vector<int>& nums , int k){
  int n = nums.size();
  int l=0;
  int r=0;
  int cnt=0;

  map<int, int> mpp;


  while(r<n){
    mpp[nums[r]]++;

    while(mpp.size() > k){
       mpp[nums[l]]--;

       if(mpp[nums[l]] == 0){
         mpp.erase(nums[l]);
       }
       l++;
    }

    cnt = cnt + (r-l+1);
    r++;
  }
  return cnt;
}


int differentIntegers2(vector<int>& arr , int k){
  int n = arr.size();
  int l=0;
  int r=0;
  int cnt=0;


  map<int , int> mp;

  while(r<n){
    mp[arr[r]]++;

    while(mp.size() > k-1){
      mp[arr[l]]--;
      
      if(mp[arr[l]] == 0){
        mp.erase(arr[l]);
      }
      l++;
    }
    cnt = cnt + (r-l+1);
    r++;
  }
  return cnt;
}

int kDifferentIntegers(vector<int>& nums , int k){
   return differentIntegers(nums , k) - differentIntegers2(nums, k);
};


int main(){
  vector<int> nums = {1 , 2 , 1 , 3 , 4};
  int k = 3;
  int result = kDifferentIntegers(nums , k);
  cout << "The k different integers is: " << result << endl;
  return 0;
}

