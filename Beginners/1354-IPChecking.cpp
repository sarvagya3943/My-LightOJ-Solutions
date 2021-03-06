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
    map<int,string > m;
    for(int i=0;i<256;i++)
    {
        bitset<8>temp(i);
        m[i] = temp.to_string() ;
    }
    int t;
    cin>>t;
    rep(_,1,t)
    {
        string s,temp2,temp,ss;
        cin>>s>>ss;
        cout << "Case "<<_<<": ";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                int x = 0;
                stringstream convert(temp);
                convert>>x;
                temp2 += m[x];
                temp2 += '.';
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        int x = 0;
        stringstream convert(temp);
        convert>>x;
        temp2 += (string)m[x];
        if(temp2==ss)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
