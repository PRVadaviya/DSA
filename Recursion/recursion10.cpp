// permutations
// leetcode problem

//    https://leetcode.com/problems/permutations/

// solution

class Solution {
public:

  void solve( vector<vector<int>> &ans ,vector<int> nums , int index)
  {
    if(index >= nums.length())
    {
        ans.push_back(nums);
        return ;
    }

    for(int i = index ; i<nums.size() ; i++)
    {
        swap(nums[index] , nums[i]);
        solve(ans , nums , index+1); 

        //resion behind of line is we are update digits in nums vector then 
        //nums vector must be become as it is  --backtracking
        swap(nums[index] , nums[i]);
    }

  }

    vector<vector<int>> permute(vector<int>& nums) 
    {
        int index = 0 ;
        vector<vector<int>> ans ;

        solve(ans , nums , index);
        return ans ;  
    }
};