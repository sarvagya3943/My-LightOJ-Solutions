
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
const int maxn = 55 ;
string a , b , c ;
int dp[maxn][maxn][maxn] ;
int solve(int i,int j,int k)
{
    if(i < 0 || j < 0 || k < 0) return 0 ;
    int &res = dp[i][j][k] ;
    if(res != -1) return res ;
    if(a[i] == b[j] && b[j] == c[k]) {
        res = 1 + solve(i-1,j-1,k-1) ;
        return res ;
    }
    res = max(solve(i-1,j,k) , max(solve(i,j-1,k),solve(i,j,k-1))) ;
    return res ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        memset(dp,-1,sizeof(dp)) ;
        cin >> a >> b >> c ;
        cout << "Case "<<_<<": ";
        cout << solve(a.size()-1 , b.size() - 1 , c.size() - 1) << endl ;
    }
    return 0;
}
