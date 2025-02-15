//count if one  string swap can make strings equal 

#include<bits/stdc++.h>
using namespace std;

bool areAlmostEqual(string s1 , string s2){
  int n = s1.size();
  if(s1 == s2) return true;
  if(s1.size() != s2.size()) return false;
  vector<int> diff;
  for(int i=0; i<n; i++){
    if(s1[i] != s2[i]){
      diff.push_back(i);
    }
  }
  return diff.size() == 2 && s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]];
}

int main(){
  string s1 = "bank";
  string s2 = "kanb";
  cout << areAlmostEqual(s1 , s2) << endl;
  return 0;
}





