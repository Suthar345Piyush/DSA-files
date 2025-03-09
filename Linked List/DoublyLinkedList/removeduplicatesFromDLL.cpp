//remove duplicates from doubly sorted linked list 
//tc = O(n) , space = O(1)

#include<bits/stdc++.h>
using namespace std;

class Node {
   public :
     int data;
     Node* next;
     Node* back;


     Node(int data1 , Node* next1 , Node* back1){
        data = data1;
        next = next1;
        back = back1;
     }

     Node(int data1){
       data = data1;
       next = nullptr;
       back = nullptr;
     }
};

Node* removeDuplicates(Node* head){
   Node* temp = head;

   while(temp != nullptr && temp->next != nullptr){
      Node* nextNode = temp->next;
      while(nextNode != nullptr && nextNode->data == temp->data){
         Node* duplicate = nextNode;
         delete duplicate;
      }

      temp->next = nextNode;
      if(nextNode != nullptr){ 
         nextNode->prev = temp;
         temp = temp->next;
      }
      return head;
   }
}


