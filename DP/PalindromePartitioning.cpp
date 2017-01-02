
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

int solve(string &str)
{
    int n = str.size() ;
    int cost[n] ;
    bool palin[n][n] ;
    for(int i = 0 ; i < n ; ++i) {
        palin[i][i] = true ;
    }
    for(int len = 2 ; len <= n ; ++len) {
        for(int i = 0 ; i + len - 1 < n ; ++i) {
            int j = i + len - 1 ;
            if(len == 2) {
                palin[i][j] = (str[i] == str[j]) ;
            }
            else {
                palin[i][j] = (str[i] == str[j]) && palin[i+1][j-1] ;
            }
        }
    }
    for(int i = 0 ; i < n ; ++i) {
        if(palin[0][i]) {
            cost[i] = 0 ;
        }
        else {
            cost[i] = mod ;
            for(int j = 0 ; j < i ; ++j) {
                if(palin[j+1][i] && 1 + cost[j] < cost[i]) {
                    cost[i] = cost[j] + 1 ;
                }
            }
        }
    }
    return cost[n-1] ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        string str ;
        cin >> str ;
        cout << "Case "<<_<<": ";
        cout << solve(str) << endl ;
    }
    return 0;
}
