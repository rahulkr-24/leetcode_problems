class Solution {
public:
    // int binarySearch(vector<int>&nums,int start, int end, int target)
    // {
    //     int mid=start+(end-start)/2;
    //     while(start<=end)
    //     {
    //         if(nums[mid]==target)
    //             return mid;
    //         else if(nums[mid]>target)
    //         {
    //             end=mid-1;
    //         }
    //         else
    //         {start=mid+1;
    //         }
    //         mid=start+(end-start)/2;
    //     }
    //     return -1;
    // }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
//         int end=nums.size()-1;
//         int mid=binarySearch(nums,0,end,target);
        
//         if(mid==-1)
//         {
//             return res;
//         }
//         else
//         { res[0]=mid-1;
//         while(nums[mid]==target)
//         {
//             mid++;
//         }
//         res[1]=mid-1;
//         return res;
//         }
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
    auto it2 = upper_bound(nums.begin(), nums.end(), target);

    if (it1 != nums.end() && *it1 == target) {
        ans[0] = it1-nums.begin();
    }

    if (it2 != nums.begin() && *(--it2) == target) {
        ans[1] = it2-nums.begin();
    }

    return ans;

        
    }
};