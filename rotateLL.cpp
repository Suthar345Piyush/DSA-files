//rotate the linked  list 
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


//function for nth node
Node* findNthNode(Node* temp , int k){
   int cnt = 1;
   while(temp != nullptr){
     if(cnt == k) return temp;
     cnt++;
     temp = temp->next;
   }
   return temp;
};


//rotate function 
Node* rotateLL(Node* head , int k){
    if(head == nullptr || head->next == nullptr){
       return head;
    }

    Node* tail = head;
    int len = 1;
    while(tail->next != nullptr){
       tail = tail->next;
       len++;
    }

    if(k%len == 0) return head;
    k = k%len;

    tail->next = head;
    Node* newLastNode = findNthNode(head , len-k);
    newLastNode->next = nullptr;
    return head;
}