
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

int dp[100000];
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n;
        cin>>dp[0]>>dp[1]>>dp[2]>>dp[3]>>dp[4]>>dp[5]>>n;
        rep(i,0,5)dp[i]%=10000007;
        rep(i,6,n)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6] ;
            dp[i] %= 10000007 ;
        }
        cout << "Case "<<_<<": "<<dp[n]<<endl;
    }
    return 0;
}
