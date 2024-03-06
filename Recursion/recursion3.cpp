// key present or not

#include<iostream>
using namespace std ;

bool findkey(int *arr , int key , int size)
{
     if(size == 0)
     {
          return false ;
     }

     if(arr[size-1] == key)
     {
          cout << "it is a this :  " << arr[size] << endl ;
          return true;
     }

     findkey(arr,key,size-1);
}


int main ()
{
     int a[7]={2,4,7,3,5,8,1};
     int key = 1;

     if(findkey(a , key , 7))
     {
          cout << "key is found " << endl;
     }
     else
     {
          cout << "key is not found " << endl ;
     }

     return 0;
}