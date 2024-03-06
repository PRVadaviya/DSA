#include<iostream>
using namespace std; 

class Node
{
     public :
               int data;
               Node* next ;

               Node(int d)
               {
                    this -> data = d ;
                    this -> next = NULL ;
               }
};

void insert (Node* &tail ,int d)
{
     Node* temp = new Node(d);
     tail -> next  = temp ;
     tail = tail -> next ;      // tail = temp ;
}

void print (Node* &ail)
{
     Node* ment = ail ; 

     while(ment != NULL)
     {
          cout <<"data---"<< ment -> data << "\t" ;
          ment = ment -> next ;
     }

     cout << endl ;
}

Node* GetMid (Node* head)
{
     Node* slow = head ;
     Node* fast = head->next ;

     while(fast != NULL && fast->next != NULL)
     {
          fast = fast ->next ;
          slow = slow ->next ;
     }

     return slow ;

}

Node* solve(Node* &left , Node* &right)
{
     if(left == NULL)
     {
          return right ;
     }

     if(right == NULL)
     {
          return left ;
     }

     Node* ans = new Node(-1);
     Node* temp = ans ;

     while(left != NULL && right != NULL)
     {
          if(left->data < right->data)
          {
               temp->next = left ;
               temp = left ;
               left = left ->next; 
          }
          else
          {
               temp->next = right ;
               temp = right ;
               right = right ->next;       
          }
       
     }

     while(left != NULL)
     {
          temp->next = left ;
          temp = left ;
          left = left ->next;
     }

     while(right != NULL)
     {
          temp->next = right ;
          temp = right ;
          right = right ->next;        
     }

     return ans->next ;

}

Node* Merge (Node* &head) 
{
     if(head == NULL || head->next == NULL)
     {
          return head ;
     }

     Node* mid = NULL;
     mid = GetMid(head);

     Node* left = head ;
     Node* right = mid->next;
     mid->next=NULL;

     //sorting
     left  = Merge(left);

     //sorting
     right = Merge(right);

     //merge two sorted ll

     Node* result = NULL;
     result = solve(left ,right);

     return result ;

}


int main()
{
     Node* Node1 = new Node(3);

     Node* head = Node1 ;
     Node* tail = Node1 ;
     Node* result = NULL ;
 
     insert(tail,10);
     insert(tail,32);
     insert(tail,8);
     insert(tail,23);
     print(head);

     result = Merge(head);
     print(result);

     return 0;
}
