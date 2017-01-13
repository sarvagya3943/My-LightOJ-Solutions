
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
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
const int mod = 10056 ;
int dp[1001][1001] ;
int ans[1001] ;
int main()
{
    dp[1][0] = dp[1][1] = 1 ;
    for(int n = 2 ; n <= 1000 ; ++n) {
        for(int r = 0 ; r <= n ; ++r) {
            if(r==0) {
                dp[n][r] = 1 ;
            }
            else {
                dp[n][r] = (dp[n-1][r] + dp[n-1][r-1]) % mod ;
            }
        }
    }
    ans[0] = 1 ;
    for(int i = 1 ; i <= 1000 ; ++i) {
        for(int j = 1 ; j <= i ; ++j) {
            ans[i] += dp[i][j] * ans[i-j] ;
            ans[i] %= mod ;
        }
    }
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n ; cin >> n ;
        cout << "Case "<<_<<": ";
        cout << ans[n] << endl ;
    }
    return 0;
}
