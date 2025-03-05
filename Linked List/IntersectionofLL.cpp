//Intersection of the Linked list  
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


Node* intersectionOfLL(Node* head1 , Node* head2) {
    Node* temp = head1;

    map<Node* , int> mpp;
    while(temp != nullptr){
        mpp[temp] = 1;
        temp = temp->next;
    }

    temp = head2;
    while(temp != nullptr){
       if(mpp.find(temp) != mpp.end()){
          return temp;
       }
       temp = temp->next;
    }
    return nullptr;
};


//most effieceint solution O(n1+n2) 
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


Node* intersectionOfLL(Node* firstHead , Node* secondHead){
    if(firstHead == nullptr || secondHead == nullptr){
       return nullptr;
    }


    Node* t1 = firstHead;
    Node* t2 = secondHead;

    while(t1 != t2){
       t1 = t1->next;
       t2 = t2->next;

       if(t1 == t2) return t1;

       if(t1 == nullptr)  t1 = firstHead;
       

       if(t2 == nullptr)  t2 = secondHead;
    }

    return t1;
};



