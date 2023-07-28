class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,flag=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' '&& flag==1)
            break;
            if(s[i] !=' ')
            {
                flag=1;
                count++;           
            }
        }
        return count;
    }
};