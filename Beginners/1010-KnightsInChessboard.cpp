
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


int main()
{
    int t;
    scanf("%d",&t);
    rep(_,1,t)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int ans ;
        if(n==1 or m==1)
        {
            ans = n*m ;
            printf("Case %d: %d\n",_,ans);
            continue;
        }
        if(n==2 or m==2)
        {
            ans = ((m*n)/8)*4;
            if(n*m%8==2)
            {
                ans +=2;
            }
            else if(n*m%8==4 || n*m%8==6)
            {
                ans += 4;
            }
            printf("Case %d: %d\n",_,ans);
            continue;
        }
        printf("Case %d: %d\n",_,((n*m)+1)/2);
    }
    return 0;
}
