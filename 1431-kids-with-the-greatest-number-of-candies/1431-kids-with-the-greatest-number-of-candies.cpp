class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max= *max_element(candies.begin(),candies.end());
        vector<bool> kids;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
                kids.push_back(true);
            else
                kids.push_back(false);
        }
        return kids;
    }
};