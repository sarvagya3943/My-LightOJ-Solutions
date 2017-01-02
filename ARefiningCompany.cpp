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

const int maxn = 5e2 + 5 ;
int dp[maxn][maxn] , u[maxn][maxn] , r[maxn][maxn] ;
int32_t main()
{
    fast;
    int t ;
    cin >> t ;
    for(int tt = 1 ; tt <= t ; ++tt) {
        int n , m ;
        cin >> n >> m ;
        for(int i = 1 ; i <= n ; ++i) {
            for(int j = 1 ; j <= m ; ++j) {
                cin >> u[i][j] ;
                u[i][j] += u[i][j-1] ;
            }
        }
        for(int i = 1 ; i <= n ; ++i) {
            for(int j = 1 ; j <= m ; ++j) {
                cin >> r[i][j] ;
                r[i][j] += r[i-1][j] ;
            }
        }
        for(int i = 1 ; i <= n ; ++i) {
            for(int j = 1 ; j <= m ; ++j) {
                dp[i][j] = max(u[i][j] + dp[i-1][j] , r[i][j] + dp[i][j-1]) ;
            }
        }
        cout << "Case " << tt << ": " << dp[n][m] << "\n" ;
    }
    return 0;
}
