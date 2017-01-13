
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
#define mod 100000007
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int n , k ;
int a[55] , c[55] ;
ll dp[1005][55] ;
ll solve(int x,int i)
{
    if(i==n+1) {
        return x == 0 ;
    }
    if(x == 0 )return 1 ;
    if(x < 0) return 0 ;
    ll &res = dp[x][i] ;
    if(res != -1) return res ;
    res = 0 ;
    for(int j = 0 ; j <= c[i] ; ++j) {
        res += solve(x - a[i]*j , i+1) ;
        res %= mod ;
    }
    return res ;
}
int main()
{
    int t;
    scanf("%d",&t) ;
    rep(_,1,t)
    {
        memset(dp,-1,sizeof(dp)) ;
        scanf("%d%d",&n,&k) ;
        rep(i,1,n)scanf("%d",&a[i]) ;
        rep(i,1,n)scanf("%d",&c[i]) ;
        printf("Case %d: %d\n",_,solve(k,1)) ;
    }
    return 0;
}

