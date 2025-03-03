//Converting an array to doubly linked list 
#include<bits/stdc++.h>
using namespace std;

class Node {
   public :
     int data;
     Node* next;
     Node* back;
   
   public: 
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


Node* convertArray2DoublyLinkedLL(vector<int>& arr){
      Node* head = new Node(arr[0]);
      Node* prev = head;

      for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp;
      }
      return head;
}

//deletion of the node 
Node* deleteHead(Node* head) {
   if(head == NULL || head->next == NULL) {
    return NULL;
   }

   Node* prev = head;
   head = head->next;
   head->back = nullptr;
   prev->next = nullptr;
  delete prev;

  return head;
}

Node* deleteTail(Node* head) {
  if(head == NULL || head->next == NULL) {
    return NULL;
  }

  Node* tail = head;
  while(tail->next != NULL){
    tail = tail->next;
  }

  Node* prev = tail->back;
  prev->next = nullptr;
  tail->back = nullptr;
  delete tail;
  return head;
}



void print(Node* head) {
   while(head != NULL) {
     cout << head->data << " ";
     head = head->next;
   }
   cout << endl;
}



//remove kth element
Node* removeKElement(Node* head , int k){
   if(head == NULL) {
    return NULL;
   }

int cnt = 0;
Node* kNode = head;
while(kNode != NULL) {
   cnt++;
   if(cnt == k) break;
   kNode = kNode->next;
}

Node* prev = kNode->back;
Node* front = kNode->next;

if(prev == NULL && front == NULL) {
   return NULL;
}

else if(prev == NULL){
  return deleteHead(head);
}
else if(front ==  NULL){
  return deleteTail(head);
}

prev->next = front;
front->back = prev;

kNode->next = nullptr;
kNode->back = nullptr;

delete  kNode;
return head;
 }

void deleteNode(Node* temp) {
  Node* prev = temp->back;
  Node* front = temp->next;



  if(front == NULL) {
     prev->next = nullptr;
     temp->back = nullptr;
     delete temp;
     return;
  }

  prev->next = front;
  front->back = prev;

  temp->next = temp->back = nullptr;
  delete temp;
}


//Insertion in the doubly linked list 

Node* insertBeforeHead(Node* head , int val) {
  Node* newHead = new Node(val , head , nullptr);

  head->back = newHead;

  return newHead;
}


//insert before tail 
Node* insertBeforeTail(Node* head , int val) {
   if(head->next == NULL) {
     return insertBeforeTail(head , val);
   }

   Node* tail = head;
   while(tail->next != NULL) {
      tail = tail->next;
   }


   Node* prev = tail->back;
   Node* newNode = new Node(val , tail , prev);

   prev->next = newNode;
   tail->back = newNode;
   return head;
}



//insert before the  kth element  
Node* insertBeforeKthElement(Node* head , int val , int k) {
   if(k==1) {
     return insertBeforeKthElement(head , val);
   }

   Node* temp = head;
   int cnt = 0;
   while(temp != NULL) {
     cnt++;

     if(cnt == k) break;
     temp = temp->next;
   }

   Node* prev = temp->back;
   Node* newNode = new Node(val , temp , prev);
   prev->next = newNode;
   temp->back = newNode;
   return head;
}

//insert before a  node 

void insertBeforeNode(Node* node , int val) {
   Node* prev = node->back;
   Node* newNode = new Node(node  , val , prev);
   prev->next = newNode;
   node->back = newNode;
}

int main() {
   vector<int> arr = {12 , 5 ,8 ,7};
   Node* head = convertArray2DoublyLinkedLL(arr);
  // head =  deleteHead(head);
  // head = deleteTail(head);
  // head = removeKElement(head , 2);
  // deleteNode(head->next);
  // head = insertBeforeHead(head , 23);
  // head = insertBeforeTail(head , 90);
  // head = insertBeforeKthElement(head , 50 , 3);
    insertBeforeNode(head->next->next , 100);
   print(head);
}


