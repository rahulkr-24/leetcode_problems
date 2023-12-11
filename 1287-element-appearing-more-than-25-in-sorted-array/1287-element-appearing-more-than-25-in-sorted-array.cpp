class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       float n=0.25*(arr.size());
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto i: mp)
        {
            if(i.second>=n)
                return i.first;
        }
        return -1;
    }
};