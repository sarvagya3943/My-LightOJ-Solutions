
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
string s ;
int dp[105][105] ;
int solve(int l,int r)
{
    if(l >= r) return 0 ;
    int &res = dp[l][r] ;
    if(res != -1) return res ;
    res = 1e6 ;
    if(s[l] == s[r]) {
        res = min(res , solve(l+1,r-1)) ;
    }
    else {
        res = min(res ,1 + min(solve(l+1,r) , solve(l,r-1))) ;
    }
    return res ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        memset(dp,-1,sizeof(dp)) ;
        cin >> s ;
        cout << "Case "<<_<<": ";
        int n = s.size() ;
        cout << solve(0,n-1) << endl ;
    }
    return 0;
}
