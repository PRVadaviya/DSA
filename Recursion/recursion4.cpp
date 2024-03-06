#include<iostream>
using namespace std ;

int BinarySearch(int* arr , int s , int e , int key)
{
     cout << endl ;

     int mid ;

     if(s>e)
     {
          return -1 ;
     }

     mid = s + (e-s)/2 ;

     cout << arr[mid] << endl ;

     if(arr[mid] == key)
     {
          return arr[mid] ;
     }

     if(arr[mid] < key)
     {
          return BinarySearch(arr , mid+1 , e , key);
     }
     else
     {
          return BinarySearch(arr , s , mid-1 , key);
     }

}

int main ()
{
     int a[5]={2,4,8,10,14};
     int size = 5;
     int key = 21 ;

     cout <<"element is it :  " << BinarySearch(a , 0 , size-1 , key) << endl;;

     return 0;
}