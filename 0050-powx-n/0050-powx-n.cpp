class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        return 1;
        if(n<0)
        {
            n=abs(n);
            x=1/x;
        }
        double t=myPow(x,n/2);
        if(n%2==0){
            return t*t;}//for that particular testcase
        else
        return x*t*t;
    }
};