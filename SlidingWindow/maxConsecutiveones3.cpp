//max consecutive  ones  3 
//brute  force  approach

// #include<bits/stdc++.h>
// using  namespace std;

// int  maxConsecutive(vector<int>& nums , int k){
//   int zeros = 0;
//   int maxLen = 0;
//   for(int i=0; i<n; i++){
//     for(int j=i; j<n; j++){
//       if(nums[j] == 0)
//         zeros++;
//       if(zeros <= k){
//         maxLen = max(maxLen , j-i+1);
//       }
//       else {
//         break;
//       }
//     }
//   }
//   return maxLen;
// }

// time complexity = O(n*n) , space  is  O(1)


//optimized code using  sliding  window  and two pointers 

// #include<bits/stdc++.h>
// using  namespace std;

// int maxConsecutive(vector<int>& nums , int k){
//     int r , l , zeros , maxLen = 0;
//     int n = nums.size();
//     while(r < n){
//       if(nums[r] == 0) zeros++;
//       while(zeros > k){
//         if(nums[l] == 0) zeros--;
//         l++;
//       }
//       if(zeros <= k){
//         maxLen = max(maxLen , r-l+1);
//       }
//       r++;
//     }
//     return maxLen;
// }


// time complexity = O(n+n) = O(2n) , space is O(1)



//more optimized code removing inner while loop , and  reduncing time comp to O(n)

#include<bits/stdc++.h>
using  namespace std;

int maxConsecutive(vector<int>& nums , int k){
  int r=0 , l=0 , zeros=0, maxLen = 0;
  int n = nums.size();
  while(r < n){
    if(nums[r] == 0) zeros++;
    if(zeros > k) {
      if(nums[l] == 0) zeros--;
      l++;
    }
    if(zeros <= k){
      maxLen = max(maxLen , r-l+1);
    }
    r++;
  }
  return maxLen;
}

int main(){
  vector<int> nums = {1 , 0, 0,0 , 0 , 1 , 1 , 0 , 1 , 1, 1};
  int k = 2;
  cout << maxConsecutive(nums , k);
  return 0;
}


// time complexity = O(n) , space is O(1)

