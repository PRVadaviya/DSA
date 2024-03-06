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

Node* solve (Node* &first ,Node* &second) // main logic 
{
     // only for element 

     if(first->next == NULL)
     {
          first->next = second ;
          return first ;
     }


     Node* curr1 = first ;
     Node* curr2 = second ;
     Node* next1 = curr1-> next ;
     Node* next2 = curr2->next;

     while(curr2 != NULL && next1 != NULL)
     {
          if((curr1->data <= curr2->data) && (next1->data >= curr2->data))
          {
               curr1->next = curr2 ;
               next2 = curr2 -> next ;
               curr2->next = next1 ;
               curr1 = curr2 ;
               curr2 = next2 ;
          }
          else
          {
               //curr1 and curr2 both of agad vadharo 

               curr1 = next1;           // curr1 = curr1 -> next 
               next1 = next1 ->next; 

               if(next1 == NULL)
               {
                    curr1 -> next  = curr2 ;       // next1 = curr2 
                    return first;
               }
          }
     }

     return first ;

}
Node* MergeSorted (Node* &first , Node* &second) 
{
     if(first == NULL)
     {
          return second ;
     }

     if(second == NULL)
     {
          return first ;
     }

     if(first -> data <= second->data)
     {
          return solve(first,second);     //first node small hase first no .
     }
     else
     {
         return solve(second,first);     // second node small second no .
     }

}


int main()
{
     Node* Node1 = new Node(1);
     Node* Node2 = new Node(2);

     Node* head1 = Node1 ;
     Node* head2 = Node2 ;

     Node* tail1 = Node1 ;
     Node* tail2 = Node2 ;
     Node* result = NULL ;

     insert(tail1,3);
     insert(tail1,5);
     print(head1);

     insert(tail2,4);
     insert(tail2,5);
     print(head2);

     result=MergeSorted(head1,head2);
     print(result);

     return 0;
}
