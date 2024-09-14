//Patterns in cpp
// 4star in row-coloumn
#include<iostream>
using namespace std;

int main(){
   int i , j;

   for(int i = 0; i < 4; i++){
    for(int j =  0;  j < 4; j++){
      cout << "*";
    }
    cout << endl;
   }
   return 0;
}

// function method 
#include<iostream>
using namespace std;
void pattern1( int n){
  for(int i = 0; i < n; i++ ){
    for(int j = 0; j < n; j++){
      cout << "*";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern1( n);
}

// down- triangle pattern 
#include<iostream>
using namespace std;
void pattern2(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      cout << "*";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern2(n);
}


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


//equal number down triangle
#include<iostream>
using namespace std;

void pattern4(int n){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <=i; j++){
      cout << i << " ";
    }
    cout << endl;
  }
}
int main(){
  int n;
   cin >> n;
   pattern4(n);
}

//reverse triangle star

#include<iostream>
using namespace std;

void pattern5(int n){
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < n-i +1; j++){
      cout << "*";
    }

    cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern5(n);
}

//reverse triangle number:
#include<iostream>
using namespace std;

void pattern6(int n){
  for(int i = 0; i <= n; i++){
    for(int j = 1; j < n-i+1; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern6(n);
  }

//star pyramid

#include<iostream>
using namespace std;
void pattern7(int n){

  for(int i = 0; i <= n; i++){
    //space formula = n -i -1
    for(int j = 0; j < n-i-1; j++){
    cout << " ";
    }
  
    //star formula = 2*i+1
   for(int j = 0; j < 2*i+1; j++){
    cout << "*";
   }
  
  //space  formula = n - i -1
  for(int j = 0; j < n-i-1; j++){
    cout << " ";
       }
       cout << endl;
     }
   }

int main(){
  int n;
    cin >> n;
    pattern7(n);
}

// reverse star pyramid


#include<iostream>
using namespace std;
void pattern8(int n){
  for(int i = 0; i < n; i++){
    //space
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    //star formula  = 2*n - (2*i+1)
    for(int j =0; j< 2*n - (2*i+1); j++){
     cout << "*";
    }
    //space 
    for(int j = 0; j < i; j++){
      cout << " ";
    }
    cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern8(n);
}


