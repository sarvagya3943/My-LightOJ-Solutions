
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

int n , arr[21][21] ;
int dp[1<<16] ;
int solve(int mask)
{
    if(mask == 0 ) {
        // all done
        return 0 ;
    }
    int &res = dp[mask] ;
    if(res != -1) return res ;
    res = mod ;
    for(int i = 0 ; i < n ; ++i) {
        if(mask & (1 << i) ) {
            int new_mask = mask ^ (1 << i) ;
            int cost = 0 ;
            for(int j = 0 ; j < n ; ++j) {
                if(!(new_mask & (1 << j))) {
                    cost += arr[i][j] ;
                }
            }
            res = min(res , cost + solve(new_mask)) ;
        }
    }
    return res ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        memset(dp,-1,sizeof(dp));
        cin >> n ;
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                cin >> arr[i][j] ;
            }
        }
        int ans = solve( (1<<n) - 1 ) ;
        cout << "Case "<<_<<": ";
        cout << ans << endl ;
    }
    return 0;
}

