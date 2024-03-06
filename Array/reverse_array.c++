#include<iostream>
using namespace std ;

void reverse(int a[] , int m ,int n)
{
     int s=m ,e=n-1;

     while(s<=e)
     {
          swap(a[s],a[e]);
          s++;
          e--;
     }

}

int main ()
{
     int a[5]={3,5,2,9,8};
     reverse(a , 2 , 5);

     for(int i=0 ; i<5 ; i++)
     {
     cout << a[i] << endl ;
     }
     return 0;
}