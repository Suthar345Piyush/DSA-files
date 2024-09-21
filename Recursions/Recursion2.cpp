//parameterised and functional way
//parameterised part
#include<iostream>
using namespace std;
int sum(int n){
  if(n == 0) return 0;
  else return n + sum(n-1);
}
 int main(){
  int n;
  cin >> n;
  cout << sum(n) << endl;
 }


//factorial code using recursion

#include<iostream>
using namespace std;
int fact(int n){
  if(n == 1) return 1;
  else return n * fact(n-1);
}

int main(){
  int n;
  cin >> n;
  cout << fact(n) << endl;
}

//reverse an array using recursion 

#include<iostream>
using namespace std;
void  f(int i, int arr[], int n){
  if(i >= n/2) return;
  swap(arr[i], arr[n-i-1]);
  f(i+1, arr , n);
}
int main(){
int n;
cin >> n;
int arr[n];
for(int i=0; i<n; i++)
  cin >> arr[i];
  f(0, arr, n);
  for(int i=0; i<n; i++)
    cout << arr[i] << " ";


}

check for palindrom with the strings
f(i)
if(s1[i] != s2[n-i-1]) return false;
else f(i+1)

//code 

#include<bits/stdc++.h>
using namespace std;

bool f(int i, string &s1){
  if(i >= s1.size()/2) return true;
  if(s1[i] != s1[s1.size() - i - 1]) return false;
  return f(i+1, s1);
}

int main(){
  string s1 = "madam";
 cout <<  f(0, s1);
}
