//find the all pair in linked list whose sum is equal to given sum 

//first solution TC = O(n*n)
//SC = O(1)

#include<bits/std++.h>
using namespace std;

class Node {
    int data;
    Node* next;
    Node* back;

    Node(int data1 , Node* next1 , Node* back1){
       data = data1;
       next = next1;
       back = back1;
    }


    Node(int data1){
       data = data1;
       next = nullptr;
       back = nullptr;
    }
};


vector<pair<int, int>> findPairs(Node* head, int k)
{
     Node* temp1 = head;
     vector<int> ds;

     while(temp1 != nullptr){
        temp2 = temp1->next;
        while(temp2 != nullptr && temp1->data + temp2->data <= k){
            if(temp1->data + temp2->data == k){
               ds.add(temp1->data , temp2->data);
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
     }
      return ds;
}


//Optimized solution 
//TC = O(2n) , SC = O(1)

#include<bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;
    Node* back;


    Node(int data1 , Node* next1 , Node* back1){
       data = data1;
       next = next1;
       back = back1;
    }


    Node(int data1){
       data = data1;
       next = nullptr;
       back = nullptr;
    }
};



Node* findTail(Node* head){
    Node* tail = head;
    while(tail->next != nullptr) tail = tail->next;
    return tail;
}



vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int , int>> ans;

    if(head == nullptr) return ans;
    Node* left = head;
    Node* right = findTail(head);



    while(left->data < right->data){
      if(left->data + right->data == k){
         ans.push_back({left->data , right->data});
         left = left->next;
         right = right->back;
      }
      else if(left->data + right->data < k){
        left = left->next;
      }
      else {
         right = right->back;
      }
    }
    return ans;
}