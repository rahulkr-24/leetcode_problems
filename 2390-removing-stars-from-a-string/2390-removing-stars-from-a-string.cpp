class Solution {
public:
    string removeStars(string s) {
        string ans ="";
        int j=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='*') {
                if(j>0){
                    ans.erase(j - 1, 1);
                    j--;
                }
            }else{
                ans+=s[i];
                j++;
            }
        }
        return ans;
    }
};