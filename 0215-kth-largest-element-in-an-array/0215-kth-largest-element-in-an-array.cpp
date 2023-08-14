class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count =1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]!=nums[i]);
            count++;
            if(nums.size()-count+1==k)
                return nums[i];
        }
        return nums[0];
    }
};