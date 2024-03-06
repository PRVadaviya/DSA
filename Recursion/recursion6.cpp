// m ^ n

#include<iostream>
using namespace std ;

int ans = 1 ;

int pow (int m , int n)
{
     if(n == 0)
     {
          return ans ;
     }

     ans = ans * m ;

     return pow(m , n - 1) ;

}

// approch - 2 

// 2^6 -> (2^3)^2 -> (2 * 2^2) ^ 2


int pows(int m , int n)
{
     if(n == 0)
     {
          return 1 ;
     }

     if(n == 1)
     {
          return m ;
     }

     int temp = pows(m , n/2) ;

     if(n%2 == 0)
     {
          return temp * temp ;
     }
     else
     {
          return m * temp * temp ;
     }

}



int main()
{
     int m , n ;
     cin >> m >> n ;

     cout << pow(m , n) << endl ;
     cout << pows(m , n) << endl ;

     return 0 ;
}






