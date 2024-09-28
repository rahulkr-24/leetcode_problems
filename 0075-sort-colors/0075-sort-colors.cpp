class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int temp=0;
        
        while(temp <=right)
        {
            if(nums[temp]==0)
            {
                swap(nums[left++],nums[temp++]);
            }
            else if(nums[temp]==2)
            {
                swap(nums[temp],nums[right--]);
            }
            else temp++;
        }
    }
};