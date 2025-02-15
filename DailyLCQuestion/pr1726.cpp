//problem - 1726 , tuples  with same  product 
//what is  thought process ?
// 1. we need to find the number of tuples (a, b, c, d) such that a * b = c * d
// 2. we can iterate over all possible tuples and check if a * b = c * d
// 3. but this will take O(n^2) time complexity
// 4. we can use a hashmap to store the product of all possible pairs
// 5. then we can iterate over all possible pairs and check if the product is present in the hashmap
// 6. if it is present, then we can increment the count
// 7. finally, we can return the count

#include<bits/stdc++.h>
using  namespace std;

int tupleSameProduct(vector<int>& nums){
   int n = nums.size();
   unordered_map<int , int> mpp;
   int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int product = nums[i] * nums[j];
            mpp[product]++;
        }
    }

    // iterating  in the  map 
    // taking  the  no. as  a frequnacy which is  appeared highest in the  map
    
    for(auto it : mpp){
       int freq = it.second;
       ans += freq * (freq - 1)/2;
    }
    // lastly multiply our  ans  with the  possible  8 combinations 

    return ans * 8;
}

int main(){
  vector<int> nums = {1 , 2 , 4 , 5 , 10};
  cout << tupleSameProduct(nums);
  return 0;
}