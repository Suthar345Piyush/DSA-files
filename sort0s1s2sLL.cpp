//sort the Linked list which have only 0s , 1s and 2s
//brute approach 
//this  is  two pass solution , O(2n) , O(1)

#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
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


Node* sortList(Node* head){
    Node* temp = head;

    //essential edge case
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    int cnt0 , cnt1 , cnt2 = 0;
     while(temp != nullptr){
       if(temp->data == 0) cnt0++;
       else if(temp->data == 1)cnt1++;
       else if(temp->data == 2)cnt2++;

       temp = temp->next;
     };

     //again traverse the linked list 
     temp = head;

     while(temp != nullptr){
       if(cnt0) temp->data = 0;
        cnt0--;
        
        else if(cnt1) temp->data = 1;
         cnt1--;

         else temp->data = 2;
            cnt2--;

            temp = temp->next;
     }
     return head;
};


//One pass solution O(n) , O(1)

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


Node* sortList(Node* head){
   Node* temp = head;

   //edge case  

   if(head == nullptr || head->next == nullptr){
      return head;
   };

   //taking three dummy nodes of 0s , 1s , 2s 
   Node* zeroHead = new Node(-1);
   Node* oneHead = new Node(-1);
   Node* twoHead = new Node(-1);
   

   Node* zero = zeroHead;
   Node* one = oneHead;
   Node* two = twoHead;   


   while(temp != nullptr){
     //checking the nodes 
     //check for 0
      if(temp->data == 0) {
         zero->next = temp;
         zero = temp;
      }

      //check for 1
      else if(temp->data == 1){
         one->next = temp;
         one = temp;
      }

      //check for 2
      else {
         two->next = temp;
         two = temp;
      }

       temp = temp->next;

   }

     //three major edge cases 
     //using ternary operator ,  zero points to one
     zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
     one->next = twoHead->next;
     two->next = nullptr;
     
    Node* newHead = zeroHead->next;

    //delete all the dummy nodes 
    delete zeroHead , oneHead , twoHead;
   
   return newHead;
}