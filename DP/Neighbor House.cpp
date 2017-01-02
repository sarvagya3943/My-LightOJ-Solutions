
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

int arr[25][3] ;
int dp[25][3] ;
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n ;
        cin >> n ;
        for(int i = 1 ; i <= n ; ++i) {
            for(int j = 0 ; j < 3 ; ++j) {
                cin >> arr[i][j] ;
            }
        }
        for(int j = 0 ; j < 3 ; ++j) dp[1][j] = arr[1][j] ;
        for(int i = 2 ; i <= n ; ++i) {
            for(int j = 0 ; j < 3 ; ++j) {
                dp[i][j] = mod ;
                for(int k = 0 ; k < 3 ; ++k) {
                    if(k != j) {
                        dp[i][j] = min(dp[i][j] , dp[i-1][k] + arr[i][j]) ;
                    }
                }
            }
        }
        cout << "Case "<<_<<": ";
        cout << min(dp[n][0],min(dp[n][1],dp[n][2])) << endl ;
    }
    return 0;
}
