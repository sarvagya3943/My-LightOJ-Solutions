
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
int n , x ;
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n, x;
      cin >> n >> x;
      vector<vector<unsigned long long> >  dp(n + 1, vector<unsigned long long> (x + 1, 0));
      dp[0][x] = 1;
      for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= x; ++j)
          for (int k = 1; k <= 6; ++k) {
            int next = min(j + k, x);
            dp[i][j] += dp[i - 1][next];
          }
          unsigned long long den = 1ll ;
          rep(j,1,n)den *= 6ll ;
      unsigned long long g = __gcd(dp[n][0], den);
      if (dp[n][0] % den == 0)
        cout << dp[n][0] / den << endl;
      else
        cout << dp[n][0] / g << "/" <<  den / g << endl;
    }
    return 0;
}
