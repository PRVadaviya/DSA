// binary search in 2d array

#include<iostream>
#include<vector>
using namespace std ;

int check (vector<vector<int>>v1 ,int goal )
{
     int i = v1.size();
     int j = v1[0].size();

     int s=0;
     int e= (i*j) - 1;

     int mid = s+(e-s)/2 ;

     int element = v1[mid/j][mid%j];

     while(s<=e)
     {
          if(goal==element)
               return 1;
          
          if(element<goal)
          {
               s = mid +1 ;
          }
          else
          {
               e = mid-1 ;
          }

          mid = s + (e-s)/2  ;
     }

     return 0;

}

int main ()
{
     int v , pass = 21 ;
     vector<vector<int>>v3 { {1,3,7} , {10,13,15} , {17,18,20}};

     v=check(v3 , pass);
     cout << v << endl ;
     return 0;
}
