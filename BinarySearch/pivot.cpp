#include<iostream>
using namespace std ;
int pivot (int a[] , int n);

int pivot (int a[] , int n)
{
     int start , end ,mid ;

     start = 0 ;
     end = n-1 ; 
     mid = start + (end - start )/2 ;

     while (start < end )
     {
          if(a[mid] >= a[0])
          start = mid + 1;
          else 
          end = mid ;

          mid = start + (end - start)/2 ;
     }

     return start;

}
int main()
{
     int a[10]={1,3,10,8,6,3,2,1,-12,-23} ;

     cout << pivot(a , 10) << endl ;
     return 0;
}