#include<iostream>
using namespace std ;

int front = -1 , rear = -1 ;
const int a = 3 ;
int arr[a];

void push(int i)
{
     if(rear >= a-1)
     {
          cout << "Queue is full " << endl;
          return ;
     }

     if(front == -1 && rear == -1)
     {
          front++;
          arr[++rear] = i ;
          cout << "this element is inserted : " << arr[rear] << endl ;
          return ;
     }

     arr[++rear] = i ;
     cout << "this element is inserted : " << arr[rear] << endl ;
}

void pop ()
{
     if(front==-1 || rear < front)
     {
          cout << "Queue is empty "<< endl;
          return ;
     }

     cout << "this element is deleted : " << arr[front++] << endl ;
}

int main ()
{
     push(10);
     push(20);
     push(30);
     push(40);  
     push(50);   
     pop();
     pop();
     pop();
     pop();
     pop();
}   