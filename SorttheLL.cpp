//Sorting the LL
//Brute force approach  

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public :
//       int data;
//       Node* next;


//     Node(int data1 , Node* next1){
//         data = data1;
//         next = next1;
//     }

//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };


// Node* sortLL(Node* head){
//    //creating a array 

//    vector<int> arr;

//    Node* temp = head;

//    while(temp != nullptr){
//      arr.push_back(temp->data);
//      temp = temp->next;
//    }

//     // sort the array 
//     sort(arr.begin() , arr.end());

//     temp = head;
//     for(int i=0; i<arr.size(); i++){
//        temp->data = arr[i];
//        temp = temp->next;
//     }

//     return head;
// }

// //printing the linked list 

// void printLL(Node* head){
//     Node* temp = head;

//     while(temp != nullptr){
//       cout << temp->data << " ";
//       temp = temp->next;
//     }
//     cout << endl;
// }


// int main() {
//    Node* head = new Node(3);
//    head->next = new Node(2);
//    head->next->next = new Node(4);
//    head->next->next->next = new Node(1);
//    head->next->next->next->next = new Node(8);

//    cout << "Original linked list: ";
//    printLL(head);


//    head = sortLL(head);

//    cout << "sorted linked list: ";
//    printLL(head);

//    return 0;
// }

//time complexity = O(n + nlogn + n) , space complexity = O(n)

//Optimal solution using merge sort , fast/slow pointer.

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


Node* merge2SortedLL(Node* list1 , Node* list2){
   Node* dummyNode = new Node(-1);

   Node* temp = dummyNode;


   while(list1 != nullptr && list2 != nullptr) {
       if(list1->data <= list2->data){
          temp->next = list1;
          list1 = list1->next;
       } else {
         temp->next = list2;
         list2 = list2->next;
       }

       temp = temp->next;
   }

   if(list1 != nullptr){
     temp->next = list1;
   } else {
      temp->next = list2;
   }
   return dummyNode->next;
}


//function to find middle of the linked list 
Node* findMiddle(Node* head){
    if(head == nullptr || head->next == nullptr) {
       return head;
    }


    Node* slow = head;
    Node* fast = head->next;

    while(fast != nullptr && fast->next != nullptr){
       slow = slow->next;
       fast = fast->next->next;
    }
    return slow;
}

Node* sortLL(Node* head){
   if(head == nullptr || head->next == nullptr) {
     return head;
   }

   Node* middle = findMiddle(head);

   Node* right = middle->next;
   middle->next = nullptr;
   Node* left = head;


   left = sortLL(left);
   right = sortLL(right);

   return merge2SortedLL(left , right);
}

//function to print the linked list 

void printLL(Node* head){
   Node* temp = head;

   while(temp != nullptr){
     cout << temp->data << " ";
     temp = temp->next;
   }
   cout << endl;
}


int main(){
   Node* head = new Node(2);
   head->next = new Node(1);
   head->next->next = new Node(6);
   head->next->next->next = new Node(9);
   head->next->next->next->next = new Node(0);


   cout << "Original LL: ";
   printLL(head);

    head = sortLL(head);
    cout << "sorted LL: ";
   printLL(head);

   return 0;
}