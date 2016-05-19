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
#define int long long
#define mod 1000000007
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

//templates
template <typename T>T expo(T e, T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template <typename T>T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=(x*p)%m;p=(p*p)%m;n>>=1;}return x;}
template <typename T> T InverseEuler(T a, T m){return (a==1? 1 : power(a, m-2, m));}
template <typename T> T gcd(T a, T b){while(a%=b^=a^=b^=a); return b;}
template <typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}

/*
//debug
#define TRACE

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
		cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
		const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
*/
// DOBARA OVERFLOW KI GALTI HUI TO TU CHUTIYA HAI BC
// update : TU CHUTIYA HAI BC

int32_t main()
{
    fast;
    int t;
    cin>>t;
    rep(i,1,t)
    {
        int n;
        cin>>n;
        int x1,x2,y1,y2,z1,z2;
        int maxx1 = 0,maxy1 = 0,maxz1 = 0;
        int minx2 = 1002 , miny2 = 1002 , minz2 = 1002 ;
        while(n--)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            maxx1 = max(maxx1,x1);
            maxy1 = max(maxy1,y1);
            maxz1 = max(maxz1,z1);
            minx2 = min(minx2,x2);
            miny2 = min(miny2,y2);
            minz2 = min(minz2,z2);
        }
        int ans = (minx2 - maxx1);
        ans *= (miny2-maxy1);
        ans*=(minz2-maxz1);
        cout << "Case "<<i<<": ";
        if(ans<0)ans=0;
        cout << ans << '\n';
    }
    return 0;
}
