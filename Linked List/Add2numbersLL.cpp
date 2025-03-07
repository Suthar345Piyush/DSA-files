//add 2 numbers into linked list  
#include<bits/stdc++.h>
using namespace std;

class Node{
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


Node *addTwoNumbers(Node *num1 , Node *nums2){
   Node* dummyHead = new Node(-1);
   Node* curr = dummyHead;
   Node* temp1 = num1;
   Node* temp2 = num2;
   int carry = 0;

   while(temp1 != nullptr || temp2 != nullptr) {
      int sum = carry;
      if(temp1) sum += temp1->data;
      if(temp2) sum += temp2->data;

      Node* newNode = new Node(sum % 10);
      carry = sum/10;

      curr->next = newNode;
      curr = curr->next;

      if(temp1) temp1 = temp1->next;
      if(temp2) temp2 = temp2->next;
   }

   if(carry) {
     Node* newNode = new Node(carry);
     curr->next = newNode;
   }
   //dummy node ka next ye newNode hogi 
   Node* result = dummyHead->next;
   delete dummyHead;
   return result;
}


//changed solution of this  problem 

ListNode* addTwoNumbers(ListNode* l1 , ListNode* l2) {
   ListNode result = new ListNode(x:0);
   ListNode ptr = result;

   int carry = 0;
   while(l1 != nullptr || l2 != nullptr){
     int sum = 0 + carry;


     if(l1 != nullptr){
       sum += l1.val;
       l1 = l1.next;
     }


     if(l2 != nullptr){
       sum += l2.val;
       l2 = l2.next;
     }

     carry = sum/10;
     sum = sum%10;

     ptr.next = new ListNode(sum);

     ptr = ptr.next;
   }


   if(carry == 1) ptr.next = new ListNode(x:1);


   return result.next;
}