/*
ye mera template hai
apna khud likho bc :P
*/

/*
Author : Sarvagya Agarwal
*/

#include<bits/stdc++.h>
using namespace std;

//defines
#define openin freopen("input.txt","r",stdin)
#define openout freopen("output.txt","w",stdout)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define int long long
#define mod 1000000007
#define repr(i,x,y) for (__typeof(x) i=x;i>=y;i--)
#define rep(i,x,y) for (__typeof(x) i=x;i<=y;i++)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

const int maxn = 1e2 + 5 ;
int dp[maxn][maxn][maxn] ;
int solve(int lower,int upper,int boxes)
{
    if(lower > upper) return 0 ;
    if(lower == upper) return lower ;
    if(boxes == 1) {
        return ((upper + lower) * (upper - lower + 1))/2 ;
    }
    int &res = dp[lower][upper][boxes] ;
    if(res != -1) return res ;
    res = 1e15 ;
    for(int i = lower ; i <= upper ; ++i) {
        res = min(res , i + max(solve(i+1,upper,boxes),solve(lower,i-1,boxes-1))) ;
    }
    return res ;
}
int32_t main()
{
    fast;
    memset(dp,-1,sizeof(dp)) ;
    int t ;
    cin >> t ;
    for(int tt = 1 ; tt <= t ; ++tt) {
        int k , m ;
        cin >> k >> m ;
        cout << "Case " << tt << ": " ;
        cout << solve(1,m,k) << endl ;
    }
    return 0;
}
