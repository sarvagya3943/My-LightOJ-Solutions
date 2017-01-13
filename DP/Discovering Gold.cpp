
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
const int maxn = 1e2 + 5 ;
int arr[maxn] ;
double dp[maxn] ;
int main()
{
    int t;
    scanf("%d",&t) ;
    rep(_,1,t)
    {
        int n ;
        scanf("%d",&n) ;
        for(int i = 1 ; i <= n ; ++i) {
            scanf("%d",&arr[i]) ;
        }
        dp[n] = arr[n] ;
        for(int i = n - 1 ; i > 0 ; --i) {
            int moves = n - i ;
            if(moves > 6) moves = 6 ;
            dp[i] = arr[i] ;
            for(int j = i + 1 ; j <= i + moves ; ++j) {
                dp[i] += dp[j]/(moves*1.0) ;
            }
        }
        printf("Case %d: %.10f\n",_,dp[1]) ;
    }
    return 0;
}
