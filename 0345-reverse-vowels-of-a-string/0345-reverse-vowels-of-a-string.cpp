class Solution {
public:
    string reverseVowels(string s) {
        int end =s.length()-1;
        int start=0;
        string vowel="aeiouAEIOU";
        while(start<=end)
        {
            while(start<end && vowel.find(s[start])==string::npos)
                start++;
            while(start<end && vowel.find(s[end])==string::npos)
                end--;
            
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};