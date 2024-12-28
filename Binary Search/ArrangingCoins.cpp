// arranging the coins in the correct order
// binary search approach 
// #include<bits/stdc++.h>
// using namespace std;

// int arrangeCoins(int n){
//   int  low  = 1;
//   int high = n;
//   while(low <= high){
//     int mid = low + (high - low)/2;

//     int coins = mid*(mid + 1)/2;
//     if(coins == n){
      
//       return mid;
//     }
//     else if(coins < n){
//       // left eliminate
//       low = mid + 1;
//     }
//     else{
//       //right eliminate
//       high = mid - 1;
//     }
//   }
//   return high;
// }

// binary appraoch in javascript

var arrangeCoins = function(n){
    let low = 1;
    let high = n;
    while(low <= high){
      let mid = low + Math.floor((high - low)/2);
      let coins = Math.floor(mid*(mid + 1)/2);
      if(coins == n){
        return mid;
      }
      else if(coins < n){
        // left eliminate
        low = mid + 1;
      }
      else{
        // right eliminate
        high = mid - 1;
      }
    }
    return high;
}