//Add one to Linked list  
//recursive solution to solve it  with O(n) , O(1)

#include<bits/stdc++.h>
using namespace std;


class Node {
   public :
     int data;
     Node* next;


     Node(int data1 , Node* next1){
       data = data1;
       next = next1;
     }

     Node(int data1){
       data = data1;
       next = nullptr;
     }
};


//helper function with base case  
int addHelper(Node* temp){
   if(temp == nullptr){
      return 1;
   }

   int carry = addHelper(temp->next);
   temp->data = temp->data + carry;

   if(temp->data < 10) return 0;
   temp->data = 0;
   return 1;
}

Node* addOne(Node* head) {
   int carry = addHelper(head);
   if(carry == 1) {
     Node* newNode = new Node(1);
     newNode->next = head;
     head = newNode;
   }
   return head;
}

