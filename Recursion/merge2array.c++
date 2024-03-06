#include<iostream>
using namespace std ;

void merge (int a[] , int b[] , int m ,int n)
{
     int k=0,j=0,i=0,c=m+n;
     int ans[c] ;

     while(i<m && j<n)
     {
          if(a[i]<b[j])
          {
               ans[k]=a[i];
               k++;
               i++;
          }
          else
          {
               ans[k]=b[j];
               k++;
               j++;
          }
     }

     while(i<m)
     {
          ans[k]=a[i];
          k++;
          i++;
     }

     while(j<n)
     {
          ans[k]=b[j] ;
          k++;
          j++;
     }

     for(int l=0 ; l < 9 ; l++)
     {
          cout << ans[l] << " " ;
     }
}

int main ()
{
     int a[4]={1,3,3,7};
     int b[5]={2,4,6,8,10};
     merge(a , b , 4 , 5);
      
     return 0;
}