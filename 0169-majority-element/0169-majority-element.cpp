class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement=nums[0];
        int cnt=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==majorityElement)
                cnt++;
            else if(cnt==0)
            {
                majorityElement=nums[i];
                cnt=1;
            }
            else cnt--;
        }
        return majorityElement;
    }
};