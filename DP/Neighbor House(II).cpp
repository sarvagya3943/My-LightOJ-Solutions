
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
const int maxn = 1e3 + 5 ;
int n , arr[maxn] , dp[maxn][2] ;
int solve(int i , int taken)
{
    if(i >= n)return 0 ;
    if(i == n - 1 && taken) {
        return 0 ;
    }
    int &res = dp[i][taken] ;
    if(res != -1) return res ;
    res = 0 ;
    res = max(res , solve(i+1,taken)) ;
    if(i==0)taken=1 ;
    res = max(res , solve(i+2,taken) + arr[i]) ;
    return res ;
}
int main()
{
    int t;
    scanf("%d" , &t) ;
    rep(_,1,t)
    {
        memset(dp,-1,sizeof(dp)) ;
        scanf("%d" , &n) ;
        for(int i = 0 ; i < n ; ++i)scanf("%d" , &arr[i]) ;
        printf("Case %d: %d\n",_,solve(0,0)) ;
    }
    return 0;
}
