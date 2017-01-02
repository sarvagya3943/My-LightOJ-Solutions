
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
int m , n ;
vector<int> v ;
int dp[15][10] ;
int solve(int index,int prev)
{
    if(index > n) {
        return 1 ;
    }
    int &res = dp[index][prev] ;
    if(res != -1) return res ;
    res = 0 ;
    if(index == 1) {
        // can fill anything
        for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it) {
            res += solve(index + 1 , *it) ;
        }
        return res ;
    }
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; ++it) {
        if(abs(prev-*it) <= 2) {
            res += solve(index+1,*it) ;
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
        cin >> m >> n ;
        v.clear() ;
        for(int i = 1 ; i <= m ; ++i) {
            int x ;
            cin >> x ;
            v.pb(x) ;
        }
        cout << "Case "<<_<<": ";
        memset(dp,-1,sizeof(dp)) ;
        cout << solve(1,0) << endl ;
    }
    return 0;
}
