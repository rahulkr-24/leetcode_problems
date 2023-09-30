class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n= nums.size();
        int minArr[n];
        int k=n;
        minArr[0]=nums[0];
        for(int i=1;i<n;i++){
            minArr[i]=min(minArr[i-1],nums[i]);
        }
        for(int j=n-1;j>0;j--){
            if(nums[j]>minArr[j]){
                auto it=lower_bound(nums.begin()+k,nums.end(),minArr[j]+1);
                k=it-nums.begin();
                if(k<nums.size() && nums[k]<nums[j]){
                    return true;
                } 
                nums[--k]=nums[j];
            }
        }
        return false;
    }
};