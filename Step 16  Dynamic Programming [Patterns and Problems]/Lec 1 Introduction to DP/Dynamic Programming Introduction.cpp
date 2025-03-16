// Problem Link - https://www.geeksforgeeks.org/problems/introduction-to-dp/1

// User function Template for C++

#define MOD 1000000007
#define ll long long int

class Solution {
  public:
    
    ll fun(ll n, vector<ll> &dp)
    {
        if(n<2)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n] = (fun(n-1,dp) + fun(n-2,dp))%MOD;
    }
  
    long long int topDown(int n) {
        vector<ll> dp(n+1,-1);
        return fun(n,dp);
    }
    
    
    long long int bottomUp(int n) {
        ll a = 0;
        ll b = 1;
        if(n<2)
            return n;
        ll ans;
        for(ll i=2;i<=n;i++)
            ans = (a+b)%MOD, a = b, b = ans;
        return ans;
    }
};