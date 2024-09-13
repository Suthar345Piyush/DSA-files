// pass by value

// #include<iostream>
// using namespace std;

// void doSomething(string s){
//   s[0] = 't';
//   cout << s << endl;
// }
// int main(){
//   string s = "piyush";
//   doSomething(s);
//   cout << s << endl;
//   return 0;

// }

//pass by reference 

// #include<iostream>
// using namespace std;

// void doSomething(string &s){ //through this & the original value is passed
//   s[0] = 'r';
//   cout << s << endl;
// }

// int main(){

//   string s = "piyush";
//   doSomething(s); // here's i got its original value or adderess 
//   cout << s << endl;
// }

//arrays always goes with reference

#include<iostream>
using namespace std;
void doSomething(int arr[], int n){
  arr[0] += 100;
  cout << arr[0] << endl;
}
int main(){
   int n = 10;
   int arr[n];
    for(int i = 0; i < n; i = i +1){
      cin >> arr[i];
    }

    doSomething(arr, n);

    cout << arr[0] << endl;
}