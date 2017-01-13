
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
#define rep(i,a,n) for(__typeof(n) i=a;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
const int maxn = 1005 ,mod = 1000007 ;
int lcs[maxn][maxn] , cnt[maxn][maxn] ;
int nexta[maxn][26] , nextb[maxn][26] ;
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        string a , b ;
        cin >> a >> b ;
        cout << "Case "<<_<<": ";
        int n = a.size() , m = b.size() ;
        rep(i,0,n)rep(j,0,m) {
            if(!i || !j) lcs[i][j] = 0 ;
            else {
                if(a[i-1] == b[j-1]) {
                    lcs[i][j] = lcs[i-1][j-1] + 1 ;
                }
                else lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]) ;
            }
        }
        rep(i,0,n)
        {
            rep(j,0,m)
            {
                if(!i || !j) cnt[i][j] = 1 ;
                else {
                    cnt[i][j] = 0 ;
                    if(a[i-1] == b[j-1] ) {
                        cnt[i][j]=cnt[i-1][j-1] ;
                    }
                    else {
                        if(lcs[i-1][j] == lcs[i][j]) {
                            cnt[i][j] += cnt[i-1][j] ;
                            cnt[i][j] %= mod ;
                        }
                        if(lcs[i][j-1] == lcs[i][j]) {
                            cnt[i][j] += cnt[i][j-1] ;
                            cnt[i][j] %= mod ;
                        }
                        if(lcs[i-1][j-1]==lcs[i][j]) {
                            cnt[i][j] -= cnt[i-1][j-1] ;
                            cnt[i][j] += mod ;
                            cnt[i][j] %= mod ;
                        }
                    }
                }
            }
        }
        cout << cnt[n][m] << endl ;
    }
    return 0;
}

