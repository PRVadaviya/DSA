#include<iostream>
using namespace std ;

void MergeTwo(int* arr , int s ,int e)
{
     int mid = (s+e)/2;

     int len1 = mid-s+1;
     int len2 = e-mid;
     int startmain = s;

     int *first = new int[len1];
     int *second = new int[len2];

     for(int i=0 ; i<len1 ; i++)
     {
          first[i] = arr[startmain++];
     }

     startmain=mid+1;

     for(int i=0 ; i<len2 ; i++)
     {
          second[i] = arr[startmain++];
     }

     int k=0,j=0;
     startmain = s;

     while(k < len1 && j < len2)
     {
          if(first[k] < second[j] )
          {
               arr[startmain++] = first[k++]  ;
          }
          else 
          {
               arr[startmain++] = second[j++]  ;
          }
     }

     while(k<len1)
     {
          arr[startmain++] = first[k++]  ;
     }

     while(j<len2)
     {
          arr[startmain++] = second[j++]  ;
     }

     delete first ;
     delete second ;
}

void Merge(int *arr , int s , int e)
{
     
     if(s >= e)
     {
          return;
     }
     
     int mid = (s+e)/2;


     // sort for left side 
     Merge(arr , s , mid);

     // sort for right side
     Merge(arr , mid+1 ,e );

     //merge two sorted array
     MergeTwo(arr,s,e);

}

int main()
{
     int a[10]={2,90,45,32,67,1,56,21,89,1045};
     int n=10;

     Merge(a , 0 , n-1);

     for(int i=0 ; i<n ; i++)
     {
          cout << a[i] << "\t" ;
     }
     cout << endl ;


     return 0;
}
