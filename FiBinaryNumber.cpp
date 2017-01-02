
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

ll fib[55] ;
string convert(ll &num)
{
    string res = "" ;
    while(num) {
        if(num%2) {
            res += "1" ;
        }
        else res += "0" ;
        num /= 2 ;
    }
    reverse(all(res)) ;
    return res ;
}
int main()
{
    fib[1] = 1 ;
    for(int i = 2 ; i <= 45 ; ++i) {
        fib[i] = fib[i-1] + fib[i-2] ;
    }
    int t;
    cin>>t;
    rep(_,1,t)
    {
        ll n ;
        cin >> n ;
        cout << "Case "<<_<<": ";
        ll num = 0 ;
        for(int i = 45 ; i > 0 ; --i) {
            if(fib[i] <= n) {
                num += (1ll << (i-2)) ;
                n -= fib[i] ;
            }
        }
        cout << convert(num) << "\n" ;
    }
    return 0;
}
