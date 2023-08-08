class Solution {
public:
    int search(vector<int>& nums, int target) {
        char f=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                f=i;
        }
        return f;
    }
};