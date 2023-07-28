class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0, end=nums.size()-1,temp=0;
        while(temp<=end){
            if(nums[temp]!=0){
                swap(nums[start],nums[temp]);                  
                    start++;
            }
            temp++;
        }
    }
};