// missing number in an array :

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a , int n){
  int sum = (n * (n+1))/2;
  int sum2 = 0;

  for(int i =0; i<n; i++){
    sum2 += a[i];
  }

  return (sum - sum2);

}


// maximum consecutive ones 

#include<bits/stdc++.h>
using namespace std;


int maxConsecutiveOnes(vector<int> &a){
  int n = a.size();
  int count =  0;
  int maxi = 0;
  
  for(int i=0; i<n; i++){
    if(a[i] == 1){
      count++;
      maxi = max(count, maxi);
    }
    else {
      count = 0;
    }
  }

  return maxi;
}
