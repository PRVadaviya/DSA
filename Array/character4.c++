//abppbpa
#include<iostream>
using namespace std ;

string check (string s1)
{
     for(int i=0 ; i<s1.length() ; i++)
     {
          if(s1[i] == s1[i+1])
          {
               s1.erase(i,2);
               i=i-2;
          }
     }

     return s1 ;

}

int main ()
{
     string s2;
     cin >> s2;
     cout << check(s2) << endl ;
}