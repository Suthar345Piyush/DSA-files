//Numbers of  substring  containing all charcter at least once  
//brute  solution 


#include<bits/stdc++.h>
using  namespace std;


int  noOfSubstrings(string  s){
  int cnt = 0;
  int n = s.size();
  for(int i=0; i<n; i++){
     int hash[3] = {0};

     for(int j=i; j<n; j++){
      hash[s[j]-1 , 1] = i;

      if(hash[0] + hash[1] + hash[3] == 3)  cnt++;
     }
  }
  return cnt;
}

//tc is  O(n^2)


//optimal solution with same tc 

#include<bits/stdc++.h>
using namespace std;

int noOfSubstrings(string  s){
   int cnt = 0;
   int n = s.size();

   for(int i=0; i<n; i++){
          int hash[3]={0};
      for(int j=i; j<n; j++){
        hash[s[j] -1 , 1] = 1;

        if(hash[0] + hash[1] + hash[2] == 3)
         cnt = cnt + (n-j);
         break;
      }
   }
   return cnt;
}


//effecient  solution using  sliding  window  


#include<bits/stdc++.h>
using namespace std;


int noOfSubstring(string  s){
  int n = s.size();
  int cnt = 0;

  int lastSeen[3] = { -1 , -1, -1};
  for(int i=0; i<n; i++){
    lastSeen[s[i] - 'a'] = i;

    if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1){
      int minPos = min({lastSeen[0]  , lastSeen[1] , lastSeen[2]});
      cnt  = cnt + (1 + minPos);
    }
  }
  return cnt;
}

//tc = O(n) , sc = O(n)