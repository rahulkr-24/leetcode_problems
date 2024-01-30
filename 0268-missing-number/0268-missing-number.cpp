class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long actualSum = (n*(n+1))/2;
        for(int element: nums)
        {
            actualSum -= element;
        }

        return actualSum;
    }
};