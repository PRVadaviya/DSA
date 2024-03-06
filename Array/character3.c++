//check string same or not

#include<iostream>
using namespace std;

int checkout(int arr1[] , int arr2[])
{
     for ( int j=0 ; j<26 ; j++)
     {
          if(arr1[j] != arr2[j])
          {
               return 0;
          }   
     }
     return 1;
}


int check (string s1,string s2)
{
     int arr1[26]={0};
     int arr2[26]={0};
     int i=0,index;

     for(int i=0 ; i<s1.length() ; i++ )
     {
          int index= s1[i] - 'a' ;
          arr1[index]++;
     }

     for(int i=0 ; i<s2.length() && i<s1.length() ; i++ )
     {
          int index= s2[i] - 'a' ;
          arr2[index]++;
     }

     if(checkout(arr1 , arr2))
     {
          return 1;
     }

     for(int z=0 ; z<s2.length() ; z++)
     {
          char newchar = s2[i];
          index = newchar - 'a' ;
          arr2[index]++;

          char oldchar = s2[i-(s2.length())];
          index = oldchar - 'a' ;
          arr2[index]--;

     if(checkout(arr1 , arr2))
     {
          return 1;
     }
           
     }

     return 0;


}

int main ()
{
     string s1,s2 ;
     cin >> s1 ;
     cin >> s2 ;

     cout << check(s1,s2) << endl ;

     return 0;
}