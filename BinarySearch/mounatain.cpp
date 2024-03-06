// first index and last index of a one key number 

#include<iostream>
using namespace std ;
int peak(int a[] , int );


int peak(int a[] , int n )
{
     int start,mid,end;

     start = 0 ;
     end = n-1 ;
     mid = start + (end - start)/2 ;

     while(start < end)            // not write <=
     {

          if(a[mid] < a[mid+1])
          start = mid +1;
          else 
          end=mid ;

          mid = start + (end - start)/2 ;

     }

     return end ;
}

int main()
{
     int a[6]={2,5,6,8,3,1};

     cout << peak(a , 6) << endl ;

     return 0 ;
}