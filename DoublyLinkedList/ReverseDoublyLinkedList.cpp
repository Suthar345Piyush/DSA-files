//Reversal of the doubly linked list

//Brute force to reverse the linked list , is to use the stack with O(2n) tc , O(n) sc.
#include<bits/stdc++.h>
using namespace std;

class Node {
   public : 
     int data;
     Node* next;
     Node* back;


   public :
     Node(int data1 , Node* next1 , Node* back1) {
       data = data1;
       next = next1;
       back = back1;
     }

   public :
     Node(int data1) {
       data = data1;
       next = nullptr;
       back = nullptr;
     }
};


//firstly convert a array to dll

Node* convertArr2DLL(vector<int> arr) {
   Node* head = new Node(arr[0]);

   Node* prev = head;

   for(int i=1; i<arr.size(); i++) {
    Node* temp = new Node(arr[i] , nullptr , prev);

    prev->next = temp;

    prev = temp;
   }

   return head;
}

void print(Node* head) {
  while(head != nullptr) {
     cout << head->data << " ";
     head = head->next;
  }
}

//reversing the linked list

// Node* reverseDLL(Node* head) {
//    if(head==NULL || head->next == NULL){
//      return head;
//    }


//    stack<int> st;


//    Node* temp = head;

//    while(temp != NULL) {
//      st.push(temp->data);

//      temp = temp->next;
//    }

//    temp = head;

//    while(temp != NULL) {
//      temp->data = st.top();

//      st.pop();

//      temp = temp->next;
//    }

//    return head;
// } 



//Reversing the linked list , using optimal approch tc O(n) , O(1)

Node* reverseDoublyLL(Node* head) {
   if(head ==  NULL  || head->next ==  NULL) {
    return head;
   }


   Node* last = NULL;
   Node* current = head;

   while(current != NULL) {
      last = current->back;

      current->back = current->next;
      current->next = last;

      current= current->back;
   }

   return last->back;
}

int main() {
   vector<int> arr = {1 , 2, 3 , 4 , 5  ,6};
   Node* head = convertArr2DLL(arr);
   cout << endl << "dll before : " << endl;
   print(head);
   cout << endl << "dll after : " << endl;

   head = reverseDoublyLL(head);

   print(head); 
}