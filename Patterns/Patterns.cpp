//Patterns in cpp
// 4star in row-coloumn
// #include<iostream>
// using namespace std;

// int main(){
//    int i , j;

//    for(int i = 0; i < 4; i++){
//     for(int j =  0;  j < 4; j++){
//       cout << "*";
//     }
//     cout << endl;
//    }
//    return 0;
// }

// function method 
// #include<iostream>
// using namespace std;
// void pattern1( int n){
//   for(int i = 0; i < n; i++ ){
//     for(int j = 0; j < n; j++){
//       cout << "*";
//     }
//     cout << endl;
//   }
// }
// int main(){
//   int n;
//   cin >> n;
//   pattern1( n);
// }

// down- triangle pattern 
// #include<iostream>
// using namespace std;
// void pattern2(int n){
//   for(int i = 0; i < n; i++){
//     for(int j = 0; j <= i; j++){
//       cout << "*";
//     }
//     cout << endl;
//   }
// }
// int main(){
//   int n;
//   cin >> n;
//   pattern2(n);
// }


//number-down triangle pattern
#include<iostream>
using namespace std;

void pattern3(int n){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern3(n);
}