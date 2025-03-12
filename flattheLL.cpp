//flat the linked list  
// brute force approach 
#include<bits/stdc++.h>
using namespace std;

class Node {
   public :
     int data;
     Node* next;
     Node* child;


     Node(int data1 , Node* next1 , Node* child1){
        data = data1;
        next = next1;
        child = child1;
     }

     Node(int data1){
       data = data1;
       next = nullptr;
       child = nullptr;
     }
};
//converting the linked list into array 

Node* convertArrToLL(vector<int>& arr){
   Node* dummyNode = new Node(-1);
   Node* temp = dummyNode;


   for(int i=0; i<arr.size(); i++){
     temp->child = new Node(arr[i]);

     temp = temp->child;
   }

   return dummyNode->child;
}


Node* flattenLL(Node* head){
   vector<int> arr;

   while(head != nullptr){
     Node* t2 = head;
     while(t2 != nullptr){
        arr.push_back(t2->data);
        t2 = t2->child;
     }
     head = head->next;
   }

   sort(arr.begin() , arr.end());

   return convertArrToLL(arr);
}


void printLL(Node*  head){
   while(head != nullptr){
      cout << head->data << " ";
      head = head->child;
   }
   cout << endl;
}


//printing the ll in grid like structure  
void printOriginalLL(Node* head , int depth){
   while(head != nullptr){
     cout << head->data;


     if(head->child){
        cout << " -> ";
        printOriginalLL(head->child , depth+1);
     }

     if(head->next){
       cout << endl;
       for(int i=0; i<depth; ++i){
         cout << "| ";
       }
     }
     head = head->next;
   }
}



int main(){
   //creating a  linked list 

   Node* head = new Node(5);
   head->child = new Node(14);


   head->next = new Node(10); 
   head->next->child = new Node(4);

   head->next->next = new Node(12);
   head->next->next->child = new Node(20);
   head->next->next->child->child = new Node(13);
   
   head->next->next->next = new Node(7);
   head->next->next->next->child = new Node(17);


   cout << "Original LL: " << endl;
   printOriginalLL(head , 0);
   Node* flattend = flattenLL(head);
   cout << "\nFlattend ll: ";
   printLL(flattend);

return 0;
}




//optimal solution 

