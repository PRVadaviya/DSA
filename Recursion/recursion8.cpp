// sub set 
/*
leetcode

https://leetcode.com/problems/subsets/description/

*/


class Solution {
public:

    void solution(vector<int>nums , vector<vector<int>>&ans ,vector<int>temp , int i , int len)
    {
        if(i >= len)
        {
            ans.push_back(temp);
            return  ;
        }

        solution(nums , ans ,temp, i+1 , len) ;

        temp.push_back(nums[i]);
        solution(nums , ans ,temp , i+1 , len ) ; 
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans ;
        vector<int>temp ;
        int i=0 ;
        int len = nums.size() ;
        solution(nums , ans ,temp , i , len) ;

        return ans ;
    }
};





