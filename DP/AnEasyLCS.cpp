
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

string ans ;
string s[105][105] ;
int dp[105][105] ;
void pre(string &a,string &b)
{
    int n = a.size() , m = b.size() ;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(!i || !j) {
                s[i][j].clear() ;
                dp[i][j] = 0 ;
            }
            else {
                if(a[i-1]==b[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1 ;
                    s[i][j] = s[i-1][j-1] + a[i-1] ;
                }
                else if(dp[i-1][j] > dp[i][j-1]) {
                    dp[i][j] = dp[i-1][j] ;
                    s[i][j] = s[i-1][j] ;
                }
                else if(dp[i-1][j] < dp[i][j-1]) {
                    dp[i][j] = dp[i][j-1] ;
                    s[i][j] = s[i][j-1] ;
                }
                else {
                    dp[i][j] = dp[i-1][j] ;
                    s[i][j] = min(s[i-1][j] , s[i][j-1]) ;
                }
            }
        }
    }
    ans = s[n][m] ;
    if(ans.empty())ans=":(" ;
    return ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        string a , b ;
        cin >> a >> b ;
        cout << "Case "<<_<<": ";
        pre(a,b) ;
        cout << ans << endl ;
    }
    return 0;
}

