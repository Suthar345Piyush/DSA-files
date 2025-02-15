//longest substring  without repeating elements
#include<bits/stdc++.h>
using  namespace std;

int longestSubstring(string  s){
   vector<int> mpp(256 , -1);
   int n = s.size();

   int left=0;
   int right=0;
   int len =0;
   while(right < n){
     if(mpp[s[right]] != -1)
      left = max(mpp[s[right]] + 1 , left);

      mpp[s[right]] = right;
      len = max(len , right - left+1);
      right++;
   }
   return len;
}

int main(){
   string str = "piyushsuthar";
   int ans = longestSubstring(str);
   cout << "the longest sub string without repeating character is: " << ans << endl;
   return 0;
}