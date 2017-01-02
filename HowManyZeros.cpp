
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
vector<int>digits ;
int sz ;
long long dp[15][15][2][2] ;
long long solve(int index ,int zcnt ,  bool started , bool preLess)
{
    if(index == sz) return zcnt ;
    long long &res = dp[index][zcnt][started][preLess] ;
    if(res != -1) return res ;
    res = 0 ;
    int lim = preLess ? 9 : digits[index] ;
    for(int d = 0 ; d <= lim ; ++d) {
        res += solve(index + 1 ,zcnt + (started && d==0) ,  started || d != 0 , preLess || d < digits[index]) ;
    }
    return res ;
}
long long f(long long num)
{
    memset(dp,-1,sizeof(dp)) ;
    digits.clear() ;
    while(num) {
        digits.pb(num % 10) ;
        num /= 10 ;
    }
    reverse(all(digits)) ;
    sz = digits.size() ;
    return 1 + solve(0,0,false,false) ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        long long m , n ;
        cin >> m >> n ;
        long long ans = f(n) ;
        if(m)ans -= f(m-1) ;
        cout << "Case "<<_<<": ";
        cout << ans << endl ;
    }
    return 0;
}
