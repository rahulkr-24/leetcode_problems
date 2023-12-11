class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size=arr.size();
       float n=0.25*(size);
        if(size==1)
            return arr[0];
        
        //unordered_map<int,int>mp;
        for(int i=0;i<size-n;i++)
        {
            if(arr[i]== arr[i+n])
                return arr[i];
        
        }
        //for(auto i: mp)
        // {
        //     if(i.second>=n)
        //         return i.first;
        // }
         return -1;
    }
};