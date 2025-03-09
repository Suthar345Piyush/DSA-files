//Remove duplicate from sorted linked  list  

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


Node* removeDuplicates(Node* head){
    Node* temp = head;

    if(head == nullptr || head->next == nullptr){
          return head;
    };

    while(temp != nullptr && temp->next != nullptr){
        if(temp->data == temp->next->data) {
           temp->next = temp->next->next;
        }
        else temp = temp->next;
    }
    return head;
}

//tc = O(n)