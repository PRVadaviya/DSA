//remove all space in one string and space replace by @40

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std ;

int main ()
{
     int i=0;
     string s1;
     string s2 ={"@40"} ;
     getline(cin,s1);

     for(int i=0 ; i < s1[i] != '\0'; i++ )
     {
          if(s1[i] == ' ')
          {
               s1.insert(i,s2);
               i=i+3;
               s1.erase(i,1);
               i--;
          }
     }

     for(int j=0 ; j < s1.length() ; j++ )
     {    
          cout << s1[j] ;
     }

     return 0;
}