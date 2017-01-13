
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
int dp[15][2][100][100] ;
int sz , a , b , k ;
vector<int>digits ;
int f(int index,int preLess,int num,int sum)
{
    if(index == sz) {
        return num % k == 0 && sum % k == 0 ;
    }
    int &res = dp[index][preLess][num][sum] ;
    if(res != -1 )return res ;
    res = 0 ;
    int lim = preLess ? 9 : digits[index] ;
    for(int d = 0 ; d <= lim ; ++d) {
        res += f(index + 1 , preLess || d < digits[index] , ((num*10)%k + d) % k , (sum + d) % k) ;
    }
    return res ;
}
int solve(int a,int b,int k)
{
    if(k > 90) return 0 ;
    int num = b ;
    while(num) {
        digits.pb(num % 10) ;
        num /= 10 ;
    }
    reverse(all(digits)) ;
    sz = digits.size() ;
    assert(sz < 15) ;
    memset(dp,-1,sizeof(dp)) ;
    int ans = f(0,0,0,0) ;
    num = a - 1 ;
    digits.clear() ;
    while(num) {
        digits.pb(num % 10) ;
        num /= 10 ;
    }
    reverse(all(digits)) ;
    sz = digits.size() ;
    assert(sz < 15) ;
    memset(dp,-1,sizeof(dp)) ;
    ans -= f(0,0,0,0) ;
    return ans ;
}
int main()
{
    int t;
    scanf("%d",&t) ;
    rep(_,1,t)
    {
        scanf("%d%d%d",&a,&b,&k) ;
        printf("Case %d: %d\n",_,solve(a,b,k)) ;
    }
    return 0;
}
