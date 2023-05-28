class Solution {
public:
double myPow(double x, int n) {
    if (n == INT_MAX) return x;
    else if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
    if(n<0) x=1/x, n*=-1;
    double ans = 1;
    while(n>0){
        if(n&1)
            ans *= x;
        x = x*x;
        n = n>>1;
    }
    return ans;
}
};
