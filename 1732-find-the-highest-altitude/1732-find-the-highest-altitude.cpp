class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int current=0;
        int highest =current;
        for(int altgain :gain)
        {
            current+=altgain;
            highest=max(highest,current);
        }
        return highest;
    }
};