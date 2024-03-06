#include<iostream>
using namespace std ;

int front = -1  ;
const int a = 2 ;
int arr[a];

void push(int i)
{
     if(front >= a-1)
     {
          cout << "stack is full " << endl;
          return ;
     }

     if(front == -1 )
     {
          arr[++front] = i ;
          cout << "this element is inserted : " << arr[front] << endl ;
          return ;
     }

     arr[++front] = i ;
     cout << "this element is inserted : " << arr[front] << endl ;

}

void pop ()
{
     if(front==-1)
     {
          cout << "stack is empty "<< endl;
          return ;
     }

     cout << "this element is deleted : " << arr[front--] << endl ;
}

void Top()
{
     if(front == -1)
     {
          cout << "stack is empty "<< endl;
          return ;
     }
     cout << "this is top element : " << arr[front] << endl ;
}


int main ()
{
     push(10);
     push(20);
     push(30);
     push(40);     
     pop();
     Top();
     pop();
     pop();
     pop();
     pop();

}