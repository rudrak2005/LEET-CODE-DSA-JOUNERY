class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int num : nums){
            st.insert(num);

        }
        int index =0;
        for(int num : st){
            nums[index]= num;
            index++;
        }
        return index;
    }
};