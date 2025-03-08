//Delete all occurances of the key in doubly linked list 

#include<bits/stdc++.h>
using namespace std;

class Node {
   public :
     int data;
     Node* next;
     Node* prev;


     Node(int data1 , Node* next1 , Node* prev1){
         data = data1;
         next = next1;
         prev = prev1;
     }


     Node(int data1){
       data = data1;
       next = nullptr;
       prev = nullptr;
     }
};


Node* deleteAllOccurances(Node* head , int k){
    Node* temp = head;

    while(temp != nullptr){
       if(temp->data == k){
         if(temp == head){
           head = head->next;
         }

         Node* nextNode = temp->next;
         Node* prevNode = temp->prev;

         if(nextNode != nullptr) nextNode->prev = prevNode;
         if(prevNode != nullptr) prevNode->next = nextNode;

         delete temp;
         temp = nextNode;
       }
       else {
          temp = temp->next;
       }
    }
    return head;
}

