
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
const int maxn = 1e2 + 5 ;
int dp[maxn][maxn] ;
int arr[maxn] ;
int solve(int l,int r)
{
    if(l > r) return 0 ;
    int &res = dp[l][r];
    if(res != -1) return res ;
    res = -mod ;
    int sum = 0 ;
    rep(k,l,r)
    {
        sum += arr[k] ;
        res = max(res , -solve(k+1,r) + sum ) ;
    }
    sum = 0 ;
    for(int k = r ; k >= l ; --k)
    {
        sum += arr[k] ;
        res = max(res , -solve(l,k-1) + sum ) ;
    }
    return res ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n ; cin >> n ;
        rep(i,1,n) cin >> arr[i] ;
        cout << "Case "<<_<<": ";
        memset(dp,-1,sizeof(dp)) ;
        cout << solve(1,n) << endl ;
    }
    return 0;
}

