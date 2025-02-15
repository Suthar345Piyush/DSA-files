//Minimum window  substring (lc - hard)


// Brute Appraoch with tc = O(n^2) , sc = O(256)

#include<bits/stdc++.h>
using namespace std;

int windowSubstring(string s , string t){
    int minLen = 10^9;
    int cnt = 0;
    int sIndex = -1;

    for(int i=0; i<n; i++){
       int hash[256] = {0};

        for(int j=0; j<m; j++){
           hash[t[j]]++;
           for(int j=0; j<n; j++){
             if(hash[s[j]] > 0) cnt++;
               hash[s[j]]--;

                if(cnt == m){
                   if(j-i+1 < minLen)
                     minLen = j-i+1;
                      sIndex = i;
                      break;
                }
           }
        }
    }
    s.substr(sIndex , minLen);
}

//sliding window  solution 

#include<bits/stdc++.h>
using  namespace std;


int windowSubstring(string s , string t){
     vector<int> map(128 , 0);
     for(char c : t) map[c]++;


     int count = t.size();
     int s = 0;
     int e = 0;
     int minLen = INT_MAX;
     int sIndex = 0;
     int n = s.size();



     while(r < n){
         if(map[s[e]] > 0){
          count--;
         }

         map[s[e]]--;
         e++;

         while(count == 0){
          if(e - s < minLen){
             minLen = e - s;
             sIndex = s;
          }

          map[s[s]]++;

          if(map[s[s]] > 0){
            count++;
          }
          start++;
         }
     }

     return sIndex == INT_MAX ? "" : s.substr(sIndex , minLen);
    
}

