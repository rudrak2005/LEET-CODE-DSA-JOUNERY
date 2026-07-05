class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      vector <int >temp;
      for(int num : nums){
        if(num !=0){
            temp.push_back(num);
        }
      }  
      int index =0;
      for(int num: temp){
        nums[index]=num;
        index++;
      }
      while(index<nums.size()){
        nums[index]=0;
        index++;
      }
    }
};