//Converting array to linked list 
#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
      int data;
      Node* next;


      public:
      Node(int data1){
        data = data1;
        next = nullptr;
      }

      public :
       Node(int data2){
        data = data2;
        next = nullptr;
       }
};

Node* convertArray2LL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i=0; i<arr.size(); i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

//length of the linked list 

// int lengthOfLL(Node* head){
//   int cnt=0;
//   Node* temp = head;
//   while(temp){
//     //  cout << temp->data << " ";
//      temp = temp->next;
//      cnt++;
//   }
//   return cnt;
// }

//search in an linked list 
// int checkIfPresent(Node* head , int val){
//   Node* temp = head;
//   while(temp){
//     if(temp->data == val) return 1;
//     temp = temp->next;
//   }
//   return 0;
// }


void print(Node* head) {
       while(head != NULL) {
         cout << head->data << " ";
         head = head->next;
       }
       cout << endl;
}

// Node* removeHead(Node* head) {
//    if(head == NULL) return head;
//    Node* temp = head;
//    head = head->next;
//    delete temp;
//    return head;
// }

// Node* removeTail(Node* head) {
//    if(head == NULL || head->next == NULL) return NULL;


//    Node* temp = head;
//    while(temp->next->next != NULL) {
//     temp = temp->next;
//    }
//    delete temp->next;
//    temp->next = nullptr;

//    return head;
// }


// Node* removeK(Node* head , int k) {
//    if(head == NULL) return head;

//    if( k == 1 ){
//     Node* temp = head;
//     head = head->next;
//     delete temp;
//      return head;
//    }

//    int cnt=0;
//    Node* temp = head;
//    Node* prev = NULL;

//    while(temp != NULL) {
//     cnt++;
//      if(cnt == k){
//        prev->next = prev->next->next;
//        delete temp;
//        break;
//      }

//      prev = temp;
//      temp = temp->next;
//    }

//    return head;
// };


// Node* removeEl(Node* head , int el){
//   if(head == NULL) return head;

//   if(head->data == el) {
//     Node* temp = head;
//     head=head->next;
//     delete temp;
//      return head;
//   }

//   Node* temp = head;
//   Node* prev = NULL;

//   while(temp != NULL) {
//     if(temp->data == el) {
//        prev->next = prev->next->next;
//        delete temp;
//        break;
//     }
//     prev = temp;
//     temp=temp->next;
//   }
//   return head;
// }


//Insertion at the head of the LL 
Node* insertHead(Node* head , int val){
  Node* temp = new Node(head , val);
  return temp;
}


//insert at the tail of  ll

Node* insertTail(Node* head , int val){
     if(head ==  NULL) {
        return newNode(val);
     }

     Node* temp = head;
     while(temp->next == NULL) {
        temp = temp->next;
     }
     Node* newNode = newNode(val);
     temp->next = newNode;
     return head;
}



int main(){
  vector<int> arr = {12 , 5 , 8, 7};
  Node* head = convertArray2LL(arr);
  // head = removeHead(head);
  // head = removeTail(head);
  // head = removeK(head , 1);
  // head = removeEl(head , 12);
  head = insertHead(head , 100);

  print(head);
  //traversal of the linked list 

  // Node* temp = head;
  // while(temp){
  //    cout << temp->data << " ";
  //    temp = temp->next;
  // }

  // cout << lengthOfLL(head) << endl;
  // cout  << checkIfPresent(head , 8);
}
