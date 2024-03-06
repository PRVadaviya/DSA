// string 

// question - 1     ** reverse string

#include<bits/stdc++.h>
using namespace std ;

void reverseS(int i , int j , string &str)
{
     cout << str << endl ;

     if(i>j)
     {
          return ;
     }

     swap(str[i++] , str[j--]);

     reverseS(i , j , str);

}

void reverseOS(int i , int n , string& str)
{
     cout << str << endl ;

     if(i > (n-i-1))
     {
          return ;
     }

     swap(str[i] , str[(n-i-1)]);
     i++ ;

     reverseOS(i , n , str);

}

int main()
{
     string str = "pratik" ;

    // reverseS(0 , str.size() - 1 , str ) ;

     reverseOS(0 , str.size()  , str ) ;

     cout << str << endl ;
     
     return 0 ;
}


// question - 2       ** palindrome

bool palindrome(string str , int i , int j)
{
     if(i>j)
     {
          return true ;
     }

     
     if(str[i] == str[j])
     {
          i++ ;  j-- ;
          return palindrome(str , i , j) ;
     }
     else
     {
          return false ;
     }

     
}

int main()
{
     string str = "aacbaa" ;
     int i = 0 , j = str.size()-1 ;

     if(palindrome(str , i , j))
     {
          cout << "YES" << endl ;
     }
     else
     {
          cout << "NO" << endl ;
     }

     return 0 ;
}



