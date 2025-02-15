//longest repeating character replacement

//brute  force  appraoch 

#include<bits/stdc++.h>
using  namespace std;

int characterReplacement(string s , int k){
  int n = s.size();
  int maxFeq = 0;
  int maxLen = 0;
  for(int i=0; i<n; i++){
    hash[26] = {0};
    for(int j=i; j<n; j++){
      hash[s[j] - 'A']++;
      maxFeq = max(maxFeq , hash[s[j] - 'A']);
       int changes = (j-i+1) - maxFeq;
       if(changes <= k)
         maxLen = max(maxLen , j-i+1);
       else{
        break;
       }
      } 
    }
    return maxLen;
  }
//time comp = O(n^2)


//optimal approach 

#include<bits/stdc++.h>
using namespace std;

int characterReplacement(string s , int k){
  int l=0;
  int r=0;
  int n = s.size();
  int maxFeq =0;
  int maxLen = 0;
  int hash[26] = {0};

  while(r < n){
    hash[s[r] - 'A']++;
    maxFeq = max(maxFeq , hash[s[r] - 'A']);

    if((r-l+1) - maxFeq > k){
      hash[s[l] - 'A']--;
      l++;
    }
    maxLen = max(maxLen , r-l+1);
    r++;
  }
  return maxLen;
}