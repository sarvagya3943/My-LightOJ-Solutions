
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
#define mod 1000000007
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
const int maxn = 1e3 + 7 ;
int n ,dp[3][maxn] ,Eat[3][maxn] , Jump[3][maxn] ;
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        cin >> n ;
        for(int i = 0 ; i < n ; ++i) cin >> Eat[1][i] ;
        for(int i = 0 ; i < n ; ++i) cin >> Eat[2][i] ;
        for(int i = 0 ; i < n - 1 ; ++i) cin >> Jump[1][i] ;
        for(int i = 0 ; i < n - 1 ; ++i) cin >> Jump[2][i] ;
        cout << "Case "<<_<<": ";
        for(int i = 1 ; i < 3 ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                dp[i][j] = 0 ;
            }
        }
        dp[1][0] = Eat[1][0] ;
        dp[2][0] = Eat[2][0] ;
        for(int i = 1 ; i < n ; ++i) {
            for(int j = 1 ; j < 3 ; ++j) {
                dp[j][i] = Eat[j][i] ;
                dp[j][i] += min(dp[j][i-1] , dp[3-j][i-1] + Jump[3-j][i-1]) ;
            }
        }
        cout << min(dp[1][n-1] , dp[2][n-1]) << endl ;
    }
    return 0;
}
