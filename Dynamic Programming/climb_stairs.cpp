#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

// LEETCODE QUESTION 

// below link ctrl + click and go to question  

https://leetcode.com/problems/min-cost-climbing-stairs/



//  only recursion (brute force - TLE )

    int solve (vector<int>& cost , int i)
    {
        if(i == 0 || i == 1)
        {
            return cost[i] ;
        }

        int ans = cost[i] + min(solve(cost , i-1) , solve(cost , i-2));
        return ans ;
    }

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;

        int ret = min( solve(cost,n-1) , solve(cost,n-2) ) ;
        return ret ;
        
    }


//  dp approach (top - down) (recursion + memoization)

    int solve (vector<int>& cost , int i , vector<int> &dp)
    {
        if(i == 0 || i == 1)
        {
            return cost[i] ;
        }

        if(dp[i] != -1)
        {
            return dp[i] ;
        }

        dp[i] = cost[i] + min(solve(cost , i-1 , dp ) , solve(cost , i-2 , dp));
        return dp[i] ;
    }

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;
        vector<int>dp(n+1,-1) ;

        int ret = min( solve(cost,n-1,dp) , solve(cost,n-2,dp) ) ;
        return ret ;
    }


//   (bottom - up) - (tabulations) approach 

     int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;
        vector<int>dp(n+1) ;

        dp[0] = cost[0];
        dp[1] = cost[1] ;

        for(int i=2 ; i<n ; i++)
        {
            dp[i] = cost[i] + min(dp[i-1] , dp[i-2]) ;
        }

        return min(dp[n-1] , dp[n-2]);
    }


// reduce space complexcity  

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;
        int prev2 = cost[0] ;
        int prev1 = cost[1] ;
        int curr ;

        for(int i=2 ; i<n ; i++)
        {
            curr = cost[i] + min(prev1 , prev2) ;
            prev2 = prev1 ;
            prev1 = curr ;

        }

        return min(prev1 , prev2) ;

    }


