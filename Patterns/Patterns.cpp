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

//combination of the both pyramid

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
  pattern7(n);
  pattern8(n);
}

//right angle triangle on up and down half in length

//*
//**
//***
//****
//*****
//****
//***
//**
//*

#include<iostream>
using namespace std;
void pattern9(int n){

  for(int i = 1; i <= 2*n-1; i++){
    int stars = i;
    if(i > n){
      stars = 2*n-i;
    }
    for(int j = 1; j <= stars; j++){ //inner loop
      cout << "*";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern9(n);
}

// 10101 in form of right angle
#include<iostream>
using namespace std;

void pattern10(int n){
  int start = 1;
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
     start = 1;
     }
     else{
      start = 0;
     }
     for(int j = 0; j <= i; j++ ){
    cout << start;
    start = 1- start;
     }

  cout << endl;
  }
}

int main(){
  int n;
  cin >> n;
  pattern10(n);
}

//pattern of the numbers
#include<iostream>
using namespace std;

void pattern11(int n){
  int space = 2*n-1;
  for(int i = 0; i<= n; i++){
    //numbers
    for(int j =1; j <= i; j++){
      cout << j;
    }
    //space 
    for(int j = 1; j <= space; j++){
      cout << " ";
    }
    //numbers
    for(int j = i; j >= 1; j--){
      cout << j;
    }
    cout << endl;
    space = space - 2;
  }
}
int main(){
 int n;
 cin >> n;
 pattern11(n);
}

//pattern-12
//right angle triangle of differnt numbers


#include<iostream>
using namespace std;
void pattern12(int n){
   int num = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      cout << num;
      num = num + 1;
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >>n;
  pattern12(n);
}


//letters same triangle 

#include<iostream>
using namespace std;
void pattern13(int n){
char ch;
for(int i = 0; i < n; i++){
  for(char ch = 'A'; ch <= 'A' + i; ch++){
    cout << ch << " ";
       }
  cout << endl;
    }
}

int main(){
  int n;
  cin >> n;
  pattern13(n);
}

//letters down triangle

#include<iostream>
using namespace std;
void pattern14(int n){
  char ch;
  for(int i = 0; i<=n; i++){
    for(char ch = 'A'; ch <= 'A'-i+n; ch++){
      cout << ch << " ";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >>n;
  pattern14(n);
}


//pattern15
//same triangle with letters
#include<iostream>
using namespace std;
void pattern15(int n){
  for(int i = 0; i < n; i++){
    char ch = 'A' + i;
    for(int j = 0; j<= i; j++){
      cout << ch << " ";
    }
    cout << endl;
  }
}
int main(){
  int n;
  cin >> n;
  pattern15(n);
}



