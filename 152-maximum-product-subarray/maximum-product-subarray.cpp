class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd= nums[0];
        int minProd = nums[0];
        int ans= nums[0];
        for(int i=1; i<nums.size(); i++){
            int current = nums[i];
            int oldMax = maxProd;
            maxProd=max({
                current, 
                current * maxProd,
                current * minProd
            });

            minProd = min({
                current,  current * oldMax, current * minProd
            });
            ans = max(ans, maxProd);
        }
        return ans;
    }
};