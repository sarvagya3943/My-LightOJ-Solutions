
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
const int maxn = 20 ;
char grid[maxn][maxn] ;
int dp[1<<16][16] ;
int Distance(deque<pair<int,int> > &arr , int i,int j)
{
    return max(abs(arr[i].ff - arr[j].ff) , abs(arr[i].ss - arr[j].ss)) ;
}
int solve(deque<pair<int,int> > &arr , int mask , int prev)
{
    int &res = dp[mask][prev] ;
    if(res != -1) return res ;
    int n = arr.size() ;
    if(mask == (1<<n)-1) {
        return Distance(arr,0,prev) ;
    }
    res = mod ;
    for(int i = 0 ; i < n ; ++i) {
        if((mask & (1<<i)) == 0 ) {
            res = min(res , solve(arr , mask | (1<<i) , i) + Distance(arr,prev,i)) ;
        }
    }
    return res ;
}
int main()
{
    int t;
    scanf("%d",&t);
    rep(_,1,t)
    {
        memset(dp,-1,sizeof(dp));
        int n , m ;
        scanf("%d%d",&n,&m);
        for(int i = 0 ; i < n ; ++i) {
            scanf("%s",grid[i]) ;
        }
        deque<pair<int,int> > arr ;
        for(int i = 0 ; i < n ; ++i) {
            for(int j = 0 ; j < m ; ++j) {
                if(grid[i][j] == 'x') {
                    arr.push_front({i,j}) ;
                }
                else if(grid[i][j] == 'g') {
                    arr.push_back({i,j}) ;
                }
            }
        }
        printf("Case %d: %d\n",_,solve(arr,1,0)) ;
    }
    return 0;
}
