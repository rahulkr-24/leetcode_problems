class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string result="";
        bool match=true;
        for(int i=0;i<strs[0].length();i++)
        { 
        for(int j=1;j<strs.size();j++)
        {
            if(strs[j][i]!=strs[0][i])
            {
                match=false;
            }
        }
           if(match)
                result+=strs[0][i];   
        }
        return result;
    }
};