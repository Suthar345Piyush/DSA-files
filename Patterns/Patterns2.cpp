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
// for down triangle we use i <= n; / for normal right angle we use i<n;


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


//pattern16
//space formula = n - i - 1;
//letters formula = 2*(n+1)/2;

#include<iostream>
using namespace std;
void pattern16(int n){
  for(int i=0; i<n; i++){
    //space = n-i-1;
    for(int j=0; j < n-i-1; j++){
      cout << " ";
    }
    //letters = 2*(n+1)/2
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int j=1; j <= 2*i+1; j++){
      cout << ch;
      if(j <= breakpoint) ch++;
      else ch--;
    }
    //space
    for(int j =0; j < n- i -1; j++){
      cout << " ";
    }
    cout << endl;
  }
}



int main(){
  int n;
  cin >> n;
  pattern16(n);

}


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


//pattern18 for stars

#include<iostream>
using namespace std;
void pattern18(int n){
  int init = 0;
  for(int i = 0; i<n; i++){
    //stars = n-i
    for(int j = 1; j <= n-i; j++){
      cout << "*";
    }
    //spaces 
    for(int j=0; j<init; j++){
      cout << " ";
    }
    //stars
    for(int j=1; j<= n-i; j++){
      cout << "*";
    }
    init += 2;  //for growing the stars upperside
    cout << endl;
  }

  init = 2*n-2;
    for(int i=1; i<=n; i++){
       for(int j = 1; j <= i; j++){
      cout << "*";
    }
    //spaces 
    for(int j=0; j<init; j++){
      cout << " ";
    }
    //stars
    for(int j=1; j<= i; j++){
      cout << "*";
    }
    init -= 2; //for reducing down side stars
    cout << endl;
  }
    }



int main(){
  int n;
  cin >> n;
  pattern18(n);

}

//pattern19(stars pattern)

#include<iostream>
using namespace std;
void pattern19(int n){
  int spaces =  2*n-2;
  for(int i = 1; i<=2*n-1; i++){
    int stars = i;
    if(i>n) stars = 2*n-i;

  //stars
   for(int j=1; j<=stars; j++){
    cout << "*";
   }

  //spaces
  for(int j=1; j<=spaces; j++){
    cout << " ";
  }

  //stars
  for(int j=1; j<=stars; j++){
    cout << "*";
  }

  cout << endl;
  if(i < n) spaces -= 2;
  else spaces += 2;
  }
}


int main(){

  int n; 
  cin >>n;
  pattern19(n);

}
