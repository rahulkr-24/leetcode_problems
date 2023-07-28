class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negNum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums.at(i)<0)
            negNum++;
            else if(nums.at(i)==0)
            return 0;
        }
        if(negNum%2==0)
            return 1;
        else return -1;
       
    }
};