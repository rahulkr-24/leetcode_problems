/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int num) {
        int start=1,end=num,res;
        int mid=start+(end-start)/2;
        while(start<=end)
        {   
            res=guess(mid);
            if(res==-1)
                end=mid-1;
            else if(res==0)
                return mid;
            else
                start=mid+1;
            mid=start+(end-start)/2;
        }
        return -1;
    }
};