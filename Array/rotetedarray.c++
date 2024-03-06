//move to element of the kth index 
// simple remember equation
#include<iostream>
using namespace std ;

int ans[6];
int * roteted (int a[] , int n , int k)
{

          //here ans array declare is vallid because local address not return 
          //remember this notes 

     for(int i=0 ; i<n ; i++)
     {
          int z=(i+k)%n;

          ans[z]=a[i];
     }

     // for(int u=0 ; u<n ; u++)
     // {
     //      cout << ans[u] << endl ;
     // }

     return ans ;
}

int main ()
{
     int a[6]={2,6,9,1,10,15};
     int *p;
     p=roteted(a,6,2);

     for(int u=0 ; u<6 ; u++)
     {
          cout << *(p+u) << "\t" ;
     }

     return 0;
}