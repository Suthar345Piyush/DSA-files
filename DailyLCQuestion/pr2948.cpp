//Make Lexicographically Smallest Array by Swapping Elements
//using  bubble sort 
#include<bits/stdc++.h>
using  namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  int i=0;
  while(i < n){
    if(i+1 < n && arr[i] > arr[i+1]){
      int temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
      temp += 2;
    }
    else{
      i++;
    }

  }
   for(int i=0; i<n; i++){
    cout << arr[i] < " ";
   }
}