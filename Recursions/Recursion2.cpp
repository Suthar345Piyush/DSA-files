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
