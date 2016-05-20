
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
        int n;
        cin>>n;
        cout << "Case "<<_<<": ";
        int m = 1;
        while(n>0)
        {
            if(n&1)
            {
                cout<<"Impossible\n";
                break;
            }
            else
            {
                m*=2;
                n/=2;
                if(n&1)
                {
                    cout<<n<<" "<<m<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
