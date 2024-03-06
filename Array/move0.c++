#include<iostream>
using namespace std ;

int main ()
{
     int a[6]={1,0,0,4,0,5};
     int k=0;

     for(int i=0 ; i<6 ; i++)
     {
          if(a[i] != 0 )
          {
               swap(a[i],a[k]); // swap(a[k],a[i]); is also valid .
               k++;
          }
     }

     for(int i=0 ; i<6 ; i++)
     {
          cout << a[i] << "\t" ;
     }

     return 0;
}