
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
vector<int> v ;
int sz ;
int dp[40][2][2][2] ;
int solve(int index , int prev , int preless,int hua)
{
    if(index == sz) {
        return hua ;
    }
    int &res = dp[index][prev][preless][hua] ;
    if(res != -1) return res ;
    res = 0 ;
    int lim = (preless) ? 1 : v[index] ;
    for(int d = 0 ; d <= lim ; ++d) {
        res = res + solve(index + 1 , d , preless || d < v[index] , hua || (prev && d));
    }
    return res ;
}
int f(int n)
{
    memset(dp,-1,sizeof(dp));
    int temp = n ;
    while(temp) {
        v.pb(temp%2) ;
        temp /= 2 ;
    }
    reverse(all(v)) ;
    sz = v.size() ;
    return solve(0,0,0,0) ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n ;
        cin >> n ;
        cout << "Case "<<_<<": ";
        cout << f(n) << endl ;
    }
    return 0;
}
