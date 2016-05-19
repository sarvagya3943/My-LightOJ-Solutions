
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


int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int tu,lift;
        cin>>tu>>lift;
        int ans = abs(lift-tu)*4;
        ans+=3;
        ans+=5;
        ans+=3;
        ans += tu*4;
        ans+=3;
        ans+=5;
        cout << "Case "<<_<<": "<<ans<<endl;
    }
    return 0;
}

