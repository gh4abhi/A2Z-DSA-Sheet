// Problem Link - https://leetcode.com/problems/climbing-stairs/

#define ll int

class Solution {
public:

    int climbStairs(int n) {
        if(n<2)
            return 1;
        ll a = 1, b = 1;
        ll ans = 0;
        for(ll i=2;i<=n;i++)
            ans = (a+b), a = b, b = ans;
        return ans;
    }
};