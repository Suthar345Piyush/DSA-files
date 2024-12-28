// Guess the  number higher or lower / lc-374
// -1: Your guess is higher than the number I picked (i.e. num > pick).
// 1: Your guess is lower than the number I picked (i.e. num < pick).
// 0: your guess is equal to the number I picked (i.e. num == pick).

class Solution {
public: 
   int guessNumber(int n){
   int low = 1;
   int high = n;
   while(low <= high){
    int mid = low + (high - low)/2;
    int g =  guess(mid);
    if(g == 0){
      return mid;
    }
    else if(g == -1){
      // eliminate right 
       high = mid - 1;
    }
    else if(g == 1){
      // eliminate left
      low = mid + 1;
    }
   }
  return -1;
   }
}
