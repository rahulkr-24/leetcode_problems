class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long actualSum = (n*(n+1))/2;
        long sum = 0;
        for(int element: nums)
        {
            actualSum -= element;
        }

        return abs(actualSum);
    }
};