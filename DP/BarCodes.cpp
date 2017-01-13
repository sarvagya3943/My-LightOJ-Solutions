
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
int n , k , m ;
ll dp[55][55][55] ;
ll solve(int n,int k,int m)
{
    if(!k || !n)
    {
        if(!n && !k)return 1 ;
        return 0 ;
    }
    ll &res = dp[n][k][m] ;
    if(res != -1) return res ;
    res = 0 ;
    rep(i,1,m)
    {
        if(n>=i)res += solve(n-i,k-1,m) ;
        else break ;
    }
    return res;
}
int main()
{
    memset(dp,-1,sizeof(dp)) ;
    int t;
    scanf("%d",&t) ;
    rep(_,1,t)
    {
        scanf("%d%d%d",&n,&k,&m) ;
        printf("Case %d: %lld\n" , _ , solve(n,k,m)) ;
    }
    return 0;
}
