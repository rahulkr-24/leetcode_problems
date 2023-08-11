class Solution {
public:
    string removeStars(string s) {
        vector<char> c;

        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){c.pop_back();}
            else{c.push_back(s[i]);}
        }

        string ans;
        for(auto val:c){
            ans+=val;
        }

        return ans;
    }
};