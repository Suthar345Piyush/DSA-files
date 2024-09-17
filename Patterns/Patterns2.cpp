//pattern-12
//right angle triangle of differnt numbers


// #include<iostream>
// using namespace std;
// void pattern12(int n){
//    int num = 1;
//   for(int i = 1; i <= n; i++){
//     for(int j = 1; j <= i; j++){
//       cout << num;
//       num = num + 1;
//     }
//     cout << endl;
//   }
// }
// int main(){
//   int n;
//   cin >>n;
//   pattern12(n);
// }


//letters same triangle 

// #include<iostream>
// using namespace std;
// void pattern13(int n){
// char ch;
// for(int i = 0; i < n; i++){
//   for(char ch = 'A'; ch <= 'A' + i; ch++){
//     cout << ch << " ";
//        }
//   cout << endl;
//     }
// }

// int main(){
//   int n;
//   cin >> n;
//   pattern13(n);
// }

//letters down triangle

// #include<iostream>
// using namespace std;
// void pattern14(int n){
//   char ch;
//   for(int i = 0; i<=n; i++){
//     for(char ch = 'A'; ch <= 'A'-i+n; ch++){
//       cout << ch << " ";
//     }
//     cout << endl;
//   }
// }
// int main(){
//   int n;
//   cin >>n;
//   pattern14(n);
// }
// for down triangle we use i <= n; / for normal right angle we use i<n;


  //pattern15
  //same triangle with letters
  // #include<iostream>
  // using namespace std;
  // void pattern15(int n){
  //   for(int i = 0; i < n; i++){
  //     char ch = 'A' + i;
  //     for(int j = 0; j<= i; j++){
  //       cout << ch << " ";
  //     }
  //     cout << endl;
  //   }
  // }
  // int main(){
  //   int n;
  //   cin >> n;
  //   pattern15(n);
  // }


//pattern16
//space formula = n - i - 1;
//letters formula = 2*(n+1)/2;

// #include<iostream>
// using namespace std;
// void pattern16(int n){
//   for(int i=0; i<n; i++){
//     //space = n-i-1;
//     for(int j=0; j < n-i-1; j++){
//       cout << " ";
//     }
//     //letters = 2*(n+1)/2
//     char ch = 'A';
//     int breakpoint = (2*i+1)/2;
//     for(int j=1; j <= 2*i+1; j++){
//       cout << ch;
//       if(j <= breakpoint) ch++;
//       else ch--;
//     }
//     //space
//     for(int j =0; j < n- i -1; j++){
//       cout << " ";
//     }
//     cout << endl;
//   }
// }



// int main(){
//   int n;
//   cin >> n;
//   pattern16(n);

// }


//pattern17
//e form of right angle triangle
#include<iostream>
using namespace std;
void pattern17(int n){
  for(int i=0; i<n; i++){
    for(char ch = 'E' - i; ch <= 'E'; ch++){
      cout << ch << " ";
    }
    cout << endl;
  }
}


int main(){
  int n;
  cin >> n;
  pattern17(n);

}