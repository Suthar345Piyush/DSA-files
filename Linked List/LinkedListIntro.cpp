//First linked list Program 
//always take the class instead of struct , becoz it restrict the oops concepts

#include<bits/stdc++.h>
using namespace std;

class Node {
   public : 
     int data;
     Node* next;

   public:
    Node(int data1 , Node* next1) {
       data = data1;
       next = next1;
    }
};

int main() {
   vector<int> arr = {2 , 5 , 8 , 7};
   int data = 20;
   //if  i put data at the place of arr[0] , it will print the 20
   Node* y = new Node(arr[3] , nullptr);
   cout << y->data;
}
