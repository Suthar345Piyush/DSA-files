//Brute force for 3 sum problem to return the triplets
// to check for the same numbers are present in the array or not , for that i can sort the whole final array 
// for that i use set in stl in cpp 

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n , vector<int> &nums){

  set<vector<int>> st;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j<n; j++){
      for(int k = j+1; k<n; k++){
        if(nums[i] + nums[j] + nums[k] == 0){
          vector<int> temp = {nums[i] , nums[j] , nums[k]};
          sort(temp.begin() , temp.end());
          st.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin() , st.end());
  return ans;
}

//Better approach to solve this problem
// for the better method we use the hashing concept to store the elements 
// this problem is solved using two pointer approach and hashing 

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(int n , vector<int> & nums){
  set<vector<int>> st;

  for(int  i =0; i < n; i++){
    set<int> hashset;
    for(int j = i+1; j<n; j++){
      //using the formula to calculate 
      int third = -(nums[i] + nums[j]);


      if(hashset.find(third) != hashset.end()){
        vector<int> temp = {nums[i] , nums[j] , third};
        sort(temp.begin() , temp.end());
        st.insert(temp);
        }
    hashset.insert(nums[j]);
    }
  }
  vector<vector<int>> ans(st.begin() , st.end());
  return ans;
}

int main(){
  vector<int> arr = {-1 , 0 , 1, 2 , -1 , -4};
  int n = arr.size();
  vector<vector<int>> ans = triplet(n ,arr);
  for(auto it : ans){
    cout << "[";
    for(auto i : it){
      cout << i << " ";
    }
    cout << "]";
  }
  cout << endl;

  return 0;
}



// next and optimal approach is from 2pointer technique
#include<bits/stdc++.h>
vector<vector<int>> triplet(int n , vector<int> & nums){
   

   vector<vector<int>> ans;
   sort(nums.begin() , nums.end());
   for(int  i=0; i<n; i++){
    if( i> 0 && nums[i] == nums[i-1]) continue; 
    int j = i + 1;
    int k = n-1;

    while( j < k){
      int sum = nums[i] + nums[j] + nums[k];
      if(sum < 0){
        j++;
      } 
      else if( sum > 0){
        k--;
      }

      else {
        vector<int> temp = {nums[i] , nums[j] , nums[k]};
        ans.push_back(temp);
        while( j < k && nums[j] == nums[j-1]) j++;
        while(j < k && nums[k] == nums[k+1]) k--; 
      }
      
         }
   }
   return ans;
}