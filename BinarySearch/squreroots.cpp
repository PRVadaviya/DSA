#include<bits/stdc++.h>
using namespace std ;

class square
{
     public :
               int roots(int num)            // take long long int because whenever large 
               {                             //number thorght error 
                    int i,s,e,mid,ans;

                    s=0;
                    e=num;
                    mid = s+(e-s)/2 ;

                    while(s <= e)
                    {
                         if (mid * mid == num)
                         return mid ;

                         if( mid*mid < num )
                         {
                              ans = mid ;
                              s = mid +1 ;
                         }
                         else
                         e = mid -1 ;

                         mid= s + (e-s)/2 ;
                    }

                    
               }

};

int main ()
{
     int n,an;
     cin >> n ;
     square a1 ;
     an = a1.roots(n) ;
     cout << an << endl ;
     return 0;
}