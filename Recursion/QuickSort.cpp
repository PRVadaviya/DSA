#include<iostream>
using namespace std ;

int getpivotindex(int arr[] , int s , int e)
{
     int pivot = arr[s];
     int cnt = 0;

     for(int i=s+1 ; i<=e ; i++)
     {
          if(arr[i] <= pivot)
          {
               cnt++;
          }
     } 

     // swap pivotindex and first node
     int PI = s + cnt ;
     
     swap(arr[s] , arr[PI]);

     // set left side and right side
     int i = s , j = e ;

     while(i < PI && j > PI)
     {
          while(arr[i] < pivot)
          {
               i++;
          }

          while(arr[j] > pivot)
          {
               j--;
          }

          if(arr[i] > pivot && arr[j] < pivot)    //  both are valid 
          //if(i<PI && j>PI)                             //index
          {
               swap(arr[i] , arr[j]);
               i++;
               j--;
          }
     }
     return PI ;
}

void Quicksort(int arr[] , int s , int e)
{
     if(s>=e)
     {
          return ;
     }

     int pivotindex = getpivotindex(arr , s , e);

     // left side
     Quicksort(arr , s , pivotindex-1);

     //right side
     Quicksort(arr , pivotindex+1 , e);
     
}

int main()
{
     int a[8] = {50,10,40,80,90,20,30,100};
     int e=8 ;
     Quicksort(a , 0 , e-1);

     for(int i=0 ; i<e ; i++)
     {
          cout << a[i] << "  " ;
     }
     return 0;
}