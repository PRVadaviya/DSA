// Phone keypad problem

// leet code problem

// ctrl + click below link got to direct leetcode problem 

// https://leetcode.com/problems/letter-combinations-of-a-phone-number/

// solution

class Solution {

public:

    void solve(vector<string> &ans , string output , int index , string digits , string arr[])
    {
        if(index >= digits.size())
        {
            ans.push_back(output);
            return ;
        }

        int num = digits[index] - '0' ;         //'0' becuse of digits[index] it's return character
        string value = arr[num] ;

        for(int i=0 ; i<value.size() ; i++)
        {
            output.push_back(value[i]);
            solve(ans , output , index+1 , digits , arr) ;
            output.pop_back() ;         // it is a backtracking. remove this line and run code then consider previous character
        }
    }

    vector<string> letterCombinations(string digits) 
    {
        vector<string> ans ;

        if(digits.size() == 0)
        {
            return ans ;
        }

        string output ;
        int index = 0 ;
        string arr[10] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"} ;
 
        solve(ans , output , index , digits , arr) ;
        return ans ;
        
    }
};