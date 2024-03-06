#include<iostream>
using namespace std;

char getdata (string a)
{
     int arr[26]={0}; // important insilaztion to 0 

     for(int i=0 ; i<a.size() ; i++)
     {
          int get ;
          get = a[i] - 'a';
          arr[get]++;
     }

     int maxi=-1 , ans=0 ;

     for(int j=0 ; j<26 ; j++)
     {
          if(maxi < arr[j])
          {
               maxi=arr[j];
               ans=j;
          }
     }
     return (ans + 'a');
}

int main ()
{
     string s;
     cin >> s;
     cout << getdata(s) << endl;
     return 0;
}