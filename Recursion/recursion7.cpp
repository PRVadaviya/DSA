//bubble sort

#include<iostream>
using namespace std ;

void sortArr(int *arr , int n)
{
     if(n == 0 || n == 1)
     {
          return ;
     }

     for(int i=0 ; i<n ; i++)
     {
          if(arr[i] > arr[i+1])
          {
               swap(arr[i] , arr[i+1]);
          }
     }

     sortArr(arr , n-1) ;
}

int main()
{
     int arr[] = {2,9,3,8,7} ;

     sortArr(arr , 5);

     for(auto p : arr)
     {
          cout << p << " " ;
     }

     return 0 ;
}