// find  the  first bad version lc-278

#include<bits/stdc++.h>
using  namespace  std;

int  isBadVersion(int n){
  int  low = 1;
  int high = n;
  while(low < high){
    int  mid = low + (high - low)/2;
    if(isBadVersion(mid)){
      // search on the left side
      high = mid;
    }
    else{
      // search on the  right side
      low = mid + 1;
    }
  }
  return low;
}

int  main(){
  int  n;
  cin >> n;
  cout << isBadVersion(n) << endl;
  return 0;
}