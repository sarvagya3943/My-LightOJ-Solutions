
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
#define ll unsigned long long
#define mod 1000000007
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int main()
{
    int t;
    scanf("%d",&t) ;
    rep(_,1,t)
    {
        int n , k ;
        scanf("%d %d", &n, &k);
        ll ans = 0;
        if(n*n >= k){
            ans = 1;
            for(int ck = 1; ck <= k; ck++){
                ans = ans * n*n/ck;
                n -= 1;
            }
        }
        printf("Case %d: %llu\n", _, ans);
    }
    return 0;
}
