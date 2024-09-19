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
