
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

int arr[100];
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int ans=0,n,P,Q;
        cin>>n>>P>>Q;
        rep(i,1,n)cin>>arr[i];
        int i=1;
        while(P>0 && Q>0 && i<=n)
        {
            if(arr[i]<=Q)
            {
                Q -= arr[i];
                ans +=1;
                P-=1;
                i++;
            }
            else break;
        }
        cout << "Case "<<_<<": "<<ans<<endl;
    }
    return 0;
}

