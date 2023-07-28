class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1.size()==0)
        return word2;
        if(word2.size()==0)
        return word1;
        return word1[0]+mergeAlternately(word2,word1.substr(1));
    }
};