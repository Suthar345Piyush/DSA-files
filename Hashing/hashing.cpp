//using hashing technique for counting how much time the number present in the particular array

#include<bits/stdc++.h>
using namespace std;
int main(){
  int  n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  //precomputation means that here we write for how many times the number is appeard

  int hash[13] = {0};
  for(int i=0; i<n; i++){
    hash [arr[i]] += 1;
  }

  int q;
  cin >> q;
  while(q--){
    int number;
    cin >> number;
    //fetching
    cout << hash[number] <<endl;
  }


}