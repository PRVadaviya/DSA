#include<iostream>
using namespace std ;
int pivot (int a[] , int , int );

int pivot (int a[] , int n , int key )
{
     int start ,end ,mid , ans ;

     start = 0 ;
     end = n-1 ;
     mid = start + (end -start)/2 ;

     while (start < end )
     {    
           if(a[mid]==key)
           return mid ;       // this statement return only pivot left side number 

          if(a[mid] > a[0] )
          start = mid +1 ; 
          else
          end = mid ;

          mid = start + (end - start)/2 ;
     }

     ans = start ;

     for (int i=ans ; i<=n-1 ; i++ )        // this loops return pivot right side number 
     {
          if (a[i] == key )
          {
               return i;
          }
     }
}


int main ()
{
     int arr[6] = {5,9,1,2,3,5},final;
     final =  pivot(arr , 6 , 3)  ;

     cout << final << endl ;
     return 0; 
}