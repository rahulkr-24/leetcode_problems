class Solution {
public:     
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> result(len,0);
        vector<int> leftMul(len,0),rightMul(len,0);
        
        for(int i=0;i<len;i++)
        {   
            if(i==0){
                leftMul[i]=1;
            }
            else{
                leftMul[i]=leftMul.at(i-1)*nums.at(i-1);
            }
        }
        for(int i=len-1;i>=0;i--)
        {   
            if(i==len-1){
                rightMul[i]=1;
            }
            else{
                rightMul[i]=rightMul.at(i+1)*nums.at(i+1);
            }
        }
        for(int i=0;i<len;i++){
            result[i]=(leftMul[i]*rightMul[i]);
        }
        return result;
    }
};