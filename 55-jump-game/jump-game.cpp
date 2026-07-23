class Solution {
public:
        bool solve (vector <int>& nums, int index, vector<int> & dp){
            if(index>=nums.size() -1)
                return true;
                if(dp[index] != -1)
                    return dp[index];

                    for(int jump=1; jump <= nums[index]; jump++){
                        if(solve(nums, index+jump, dp))
                            return  dp[index]=1;
                    }
                    return dp[index]=0;
        }
    bool canJump(vector<int>& nums) {
        vector<int > dp(nums.size(),-1);
        return solve(nums, 0, dp);      
    }
};