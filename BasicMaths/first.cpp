//count digits

#include<iostream>
using namespace std;
int main(){
  int count = 0;
   int n;
  while(n > 0){
    count = count  +1;
    n = n / 10;
      }
      return count;
}

//reverse number:

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
  int revNm = 0;
  while(n > 0){
    int ld = n % 10;
    revNm = (revNm * 10) + ld;
    n = n/10;
  }
   cout << revNm;
}

//palindrom check

#include<bits/stdc++.h>
using namespace std;

//for palindrom taking the value in duplicate variable, other remain as it is same
int main(){
  int n;
  cin >> n;
  int revNm = 0;
  int dup = n;

  while(n>0){
    int ld = n%10;
    revNm = (revNm*10) + ld;
    n = n/10;

    if(dup == revNm){
      cout << "true";
    }
    else{
      cout << "false";
    }
    cout << endl;
  }
   
  }


//armstrong number:

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  int revNm = 0;
  int dup = n;
   int sum = 0;

  while(n>0){
    int ld = n%10;
    sum = sum + (ld * ld * ld);
    revNm = (revNm*10) + ld;
    n = n/10;

    if(sum == dup){
      cout << "true";
    }
    else{
      cout << "false";
    }
    cout << endl;
  }

}

//print all the divisors

#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
  for(int i=1; i<=n; i++){
    if(n%i == 0){ //completely divisible
      cout << i << endl;
    }
  }
}
int main(){
 int n;
 cin >>n;
 printDivisors(n);
}
  

//second approach

#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
  vector<int> list;
  for(int i=1; i<=sqrt(n); i++){
    if(n%i == 0){
      list.push_back(i);
     
    if((n/i) != i){
      list.push_back(n/i);
    }
  }
  }
  sort(list.begin(), list.end());
    for(auto x : list)
    cout << x << " ";
}
int main(){
  int n;
  cin >> n;
  printDivisors(n);

}


