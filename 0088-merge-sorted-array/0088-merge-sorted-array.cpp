class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i=0;i<n;i++)
//         {
//             nums1[m+i]=nums2[i];
//         }
//         sort(nums1.begin(),nums1.end());
//        }
        int index1=0,index2=0;
        while(index1 < m && index2 < n)
        {
            if(nums1[index1]<=nums2[index2])
               index1++;
            else
            {
                swap(nums1[index1++],nums2[index2]);
                sort(nums2.begin(),nums2.end());
            }
        }
        while(index2<n)
        {
            nums1[index1++]=nums2[index2++];
        }
    }
    
};