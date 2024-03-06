//array is sorted or not 

#include<iostream>
using namespace std ;

bool print(int* arr,int size)
{
     if(size == 6)
     {
          cout << arr[size] << "  " ;
          return true ;
     }

     if(arr[size] <= arr[size+1])
     {
          cout << arr[size] << "  " ;
          size++;
          print(arr , size);
     }
     else
     {
          return false ;
     }
}

int main()
{
     int a[7]={2,6,8,10,12,15,16};
     int size = 0 ;

     if(print(a,size)) 
          cout <<endl<< "array is sorted" << endl ;
     else
          cout <<endl<< "array is not sorted" << endl ;

}