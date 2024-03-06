// complexcity - 0(n*log(logn))
// segment sield what is this


#include<iostream>
using namespace std;

int check (int n)
{
     int a[n] = {0}  ;   // for vector use vector<bool>prime(n+1,true); 
     int flag=0 ;            // badha ma true insilizition thayu .

     for(int z=0 ; z<n ; z++)
     {
          a[z]=(z+1) ;
     }

     a[0]=a[n-1]= 0 ;

     for(int i=2 ; i<n ; i++)
     {
          if(a[i])
          {
               cout << i << "\t" ;
               flag++;
               for(int j=i*2 ; j<n ; j=j+i)
               {
                    a[j]=0 ;
               }
          }
     }

     return flag ;
}

int main ()
{
     int x;
     cin >> x;

     cout << endl  << "count = "<< check(x) << endl ;
}