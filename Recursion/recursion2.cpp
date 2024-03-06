//sum of array


#include<iostream>
using namespace std ;
int sum = 0 ;

int getsum(int *arr , int size)
{
     if(size == 0)
     {
          return 0;
     }

     size--;             // here also write this sum = sum + arr[--size]; and not need for size--
     getsum(arr,size);
     sum = sum + arr[size];
     return sum ;
}

int main ()
{
     int a[7]={2,4,7,3,5,8,1};
     int size = 7;

     int ans = getsum(a,size);
     cout << " sum of array : " << ans << endl ;

     return 0;
}