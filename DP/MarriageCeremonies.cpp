
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
const int maxn = 16 ;
int n , arr[maxn][maxn] ,dp[maxn][(1<<maxn)];
int solve(int index , int mask)
{
    if(index == n) return 0 ;
    int &res = dp[index][mask] ;
    if(res != -1) return res ;
    res = 0 ;
    for(int i = 0 ; i < n ; ++i) {
        if(mask & (1<<i)) continue ;
        int new_mask = mask | (1<<i) ;
        res = max(res , arr[index][i] + solve(index + 1 , new_mask)) ;
    }
    return res ;
}
int main()
{
    int t;
    scanf("%d" , &t) ;
    rep(_,1,t)
    {
        scanf("%d" , &n) ;
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < n ; ++j) {
                scanf("%d" , &arr[i][j]) ;
            }
        }
        memset(dp,-1,sizeof(dp)) ;
        printf("Case %d: %d\n" ,_,solve(0,0) ) ;
    }
    return 0;
}

