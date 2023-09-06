class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i=0;i<n;i++)
//         {
//             nums1[m+i]=nums2[i];
//         }
//         sort(nums1.begin(),nums1.end());
//        }
        vector<int> result;
        int index1=0,index2=0;
        while(index1 < m && index2 < n)
        {
            if(nums1[index1]<nums2[index2])
                result.push_back(nums1[index1++]);
            else
                result.push_back(nums2[index2++]);
        }
        while(index1<m)
        {
            result.push_back(nums1[index1++]);
        }
        while(index2<n)
        {
            result.push_back(nums2[index2++]);
        }
        for(int i=0;i<result.size();i++)
        {
            nums1[i]=result[i];
        }
    }
    
};