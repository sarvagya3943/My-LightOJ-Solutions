
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
#define int long long

int32_t main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int l,r;
        cin>>l>>r;
        int a = l%3,b = r%3;
        int ans = 0;
        if(a==0)
        {
            if(b==0)
            {
                ans = (r/3-l/3)*2+1;
            }
            else if(b==1)
            {
                ans = 2*(r/3-l/3)+1;
            }
            else{
                ans = 2*(r/3-l/3)+2;
            }
        }
        else if(a==1)
        {
            if(b==0)
            {
                ans = (r/3-l/3)*2;
            }
            else if(b==1)
            {
                ans = (r/3-l/3)*2;
            }
            else{
                ans = (r/3-l/3)*2+1;
            }
        }
        else
        {
            if(b==0)
            {
                ans = (r/3-l/3)*2;
            }
            else if(b==1)
            {
                ans = (r/3-l/3)*2;
            }
            else{
                ans = (r/3-l/3)*2+1;
            }
        }
        cout << "Case "<<_<<": "<<ans<<"\n";
    }
    return 0;
}
