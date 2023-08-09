class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        for(int i=0;i<haystack.length();i++)
        { 
        for(int j=0;j<n;j++)
        {
            if(needle[j]!=haystack[i+j])
               break;
            if(j==(n-1))
                return i;
        }
            
    }
        return -1;
    }
};