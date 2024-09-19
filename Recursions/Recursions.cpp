//infinite recursion example
//function calling itself again and again

#include<bits/stdc++.h>
using namespace std;

void fn(){
  cout << "Hello" << endl;
  fn();
}
int main(){
  fn();
}


//Base condition is to stop the recursion

#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void fn(){
  if(cnt == 4) return;
  cout << cnt << endl;
  cnt++;

  fn();
}

int main(){
  fn();
}


//Q1. print the name n or 5 times;

#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
  if(i>n)
    return;
    cout << "Piyush" << " " << "Suthar" << endl;
    f(i+1, n);
}

int main(){
  int n;
  cin >> n;
  f(1,n);
}

//Q2. print the number 1 to n linearly

#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
  if(i>n)
  return;
  cout << i << endl;
  f(i+1, n);
}
int main(){
  int n;
  cin >> n;
  f(1, n);
}

//Q3 .print the number n to 1 reverse order;

#include<bits/stdc++.h>
using namespace std;
void f(int i, int n){
  if(i < 1)
  return;
  cout << i << endl;
  f(i-1, n);
}

int main(){
  int n;
  cin >> n;
  f(n, n);

}

