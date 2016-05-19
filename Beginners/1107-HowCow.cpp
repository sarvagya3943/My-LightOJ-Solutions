
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int n;
        cin>>n;
        cout << "Case "<<_<<":\n";
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            if(x>=a && x<=c && y>=b && y<=d)cout<<"Yes\n";
            else cout<<"No\n";
        }

    }
    return 0;
}
