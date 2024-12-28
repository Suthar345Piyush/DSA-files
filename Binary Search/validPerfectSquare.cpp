// valid  perfect square 
#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num){
  if(num < 0) return false;
  if(num == 0 || nums == 1) return true;

  long low = 1;
  long high = num;

  while(low <= high){
    long mid = low + (high - low)/2;
    long square = mid * mid;

    if(square == num){
      return true;
    }
    else if(square < num){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return false;
}