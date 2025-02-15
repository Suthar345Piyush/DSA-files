//longest substring  with at most k characters  
//brute  force  approach tc = O(n^2) , sc = O(256)

#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s , int k){
  int n = s.size();
  int maxLen = 0;
  map<char , int> mpp;


  for(int i=0; i<n; i++){
    mpp.clear();
    
    for(int j=i; j<n; j++){
       mpp[s[j]]++;


       if(mpp.size() <= k){
        maxLen = max(maxLen , j-i+1);
       }

       else {
        break;
       }
    }
  }
}



// second  approach thodi si optimal , used sliding  window , tc=O(2n) , sc=O(256);

#include<bits/stdc++.h>
using namespace std;

int  longestSubstring(string  s , int k){
   int maxLen = 0;
   int l=0;
   int r=0;
    int  n = s.size();
    int hash[256] = {0};

   map<char , int> mpp;
    while( r < n){
       mpp[s[r]]++;

       while(mpp.size() > k){
        hash[s[l]]--;
        if(hash[s[l]] == 0) mpp.erase(mpp[s[l]]);
        l++;
       }

       if(mpp.size() <= k){
        maxLen = max(maxLen , r-l+1);
        r++;
       }
    }
      return maxLen;
}


//to reduce O(2n) to O(n) , just remove the inner while loop and  replace it with if statement , keep the  length of  window  5 , dont  trim the left side and  not make 3 , keep window of  size 5 , it is  the  best optimal solution ever 