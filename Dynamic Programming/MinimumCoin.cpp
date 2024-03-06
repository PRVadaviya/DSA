#include<iostream>
#include<bits/stdc++.h>
using namespace std ;


// Recursive solution

/*
int solveRec(vector<int> &price , int k)
{
     if(k == 0)
     {
          return 0 ;
     }

     if(k < 0)
     {
          return INT_MAX ;
     }

     int mini = INT_MAX ;

     for(int i = 0 ; i < price.size() ; i++)
     {
          int ans = solveRec(price , k - price[i]) ;

          if(ans != INT_MAX)
               mini = min (mini , 1 + ans);
     }

     return mini ;
}

int main()
{    
     vector<int> price = {1,2,5} ;
     int k = 13 ;

     int res = solveRec(price , k ) ;
     
     if(res == INT_MAX)
     {
          cout << -1 << endl ;
     }
     else
     {
          cout << res <<endl ;
     }

     return 0 ;
}
*/


// Recursive + Memoization

/*
int solveMem(vector<int> &price , vector<int> &dp , int k)
{
     if(k == 0)
     {
          return 0 ;
     }

     if(k < 0)
     {
          return INT_MAX ;
     }

     if(dp[k] != -1)
     {
          return dp[k] ;
     }

     int mini = INT_MAX ;

     for(int i = 0 ; i < price.size() ; i++)
     {
          int ans = solveMem(price , dp , k - price[i]) ;

          if(ans != INT_MAX)
               mini = min (mini , 1 + ans);       // add current coin + how many coin getting recursive call for current coin 

     }

     dp[k] = mini ;

     return mini ;
}

int main()
{    
     vector<int> price = {1,2,5} ;
     int k = 13 ;

     vector<int> dp(k + 1 , -1) ;
     int res = solveMem(price , dp , k ) ;
     
     if(res == INT_MAX)
     {
          cout << -1 << endl ;
     }
     else
     {
          cout << res <<endl ;
     }

     return 0 ;
}
*/

int solveTab(vector<int> &price  , int k)
{
     vector<int> dp(k+1 , INT_MAX) ;
     dp[0] = 0 ;

     for(int i=1 ; i<=k ; i++)
     {
          for(int j=0 ; j<price.size() ; j++)
          {
               if((i - price[j]) >=0 && dp[i - price[j]] != INT_MAX)
               {
                    dp[i] = min(dp[i] , 1 + dp[i - price[j]]) ;
               }
          }
     }

     if(dp[k] == INT_MAX)
     {
          return -1 ;
     }

     return dp[k] ;
}


int main()
{    
     vector<int> price = {1,2,5} ;
     int k = 13 ;

     int res = solveTab(price , k ) ;
     
     if(res == INT_MAX)
     {
          cout << -1 << endl ;
     }
     else
     {
          cout << res <<endl ;
     }

     return 0 ;
}