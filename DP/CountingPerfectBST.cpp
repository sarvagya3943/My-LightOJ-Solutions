
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
const ll lim = 1e10 ;
vector<ll> primes ;
bool is[100005] ;
vector<ll> res ;
ll fact[20005] ;

ll power(ll a, ll b)
{
    ll res = 1 ;
    while(b) {
        if(b&1) {
            res = (res * a)%mod ;
        }
        b/=2 ;
        a = (a*a) % mod ;
    }
    return res;
}
int main()
{
    for(ll i = 2 ; i <= 100000 ; ++i) {
        ll num = i*i ;
        while(num <= lim) {
            res.pb(num) ;
            num *= i ;
        }
    }
    sort(all(res)) ;
    res.erase(unique(all(res)),res.end()) ;
    fact[0] = 1ll ;
    rep(i,1,20000)fact[i] = (fact[i-1]*i) % mod ;
    int t;
    cin>>t;
    rep(_,1,t)
    {
        ll a , b ; cin >> a >> b ;
        cout << "Case "<<_<<": ";
        int n = upper_bound(all(res),b) - lower_bound(all(res),a) ;
        ll ans = fact[n*2] ;
        ans *= power(fact[n] , mod-2) ;
        ans %= mod ;
        ans *= power(fact[n] , mod-2) ;
        ans %= mod ;
        ans *= power(n+1,mod-2) ;
        ans %= mod ;
        if(n==0)ans=0;
        cout << ans << endl ;
    }
    return 0;
}
