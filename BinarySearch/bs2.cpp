// first index and last index of a one key number 

#include<iostream>
using namespace std ;
int firstocc(int a[] , int ,int );
int lastocc(int a[] , int , int );

int lastocc(int a[] , int n , int key)
{
     int start,mid,end,ans;

     start = 0 ;
     end = n-1 ;
     mid = start + (end - start)/2 ;

     while(start <= end)
     {
     if(a[mid] == key )
     {
          ans = mid ;
          start = mid + 1 ;    //found the right side any key number for last occurance
     }               
     else if (a[mid] < key)
     start = mid +1;
     else if (a[mid] > key)
     end = mid -1;

     mid = start + (end - start)/2 ;
     }

     return ans ;
}

int firstocc(int a[] , int n , int key)
{
     int start,mid,end,ans;

     start = 0 ;
     end = n-1 ; 
     mid = start + (end - start)/2 ;

     while(start <= end)
     {
     if(a[mid] == key )
     {
          ans = mid ;
          end = mid -1 ;           //found the left side any key number for first occurance 
     }
     else if (a[mid] < key)
     start = mid +1;
     else if (a[mid] > key)
     end = mid -1;

     mid = start + (end - start)/2 ;
     }

     return ans ;
}
int main()
{
     int arr[9]={1,3,4,4,4,4,4,4,9};
     int last ,first ;

     last = lastocc (arr , 9 , 4);
     first = firstocc(arr , 9 , 4);
     cout <<"first = " <<  first << endl;
     cout << "last = " << last << endl ;

     cout << "total number == "<< (last - first )+1 << endl;
     return 0 ;
}