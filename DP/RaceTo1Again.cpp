
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
const int maxn = 1e5 + 5;
double ans[maxn] ;

int main()
{
    ans[1] = 0.0 ;
    for(int i = 2 ; i <= 100000 ; ++i) {
        int num = i ;
        int cnt = 0 ;
        for(int j = 1 ; j*j <= num ; ++j) {
            if(num % j == 0) {
                cnt++ ;
                if(j != num/j) cnt++ ;
            }
        }
        double NUM = 1.0 ;
        double DEN = cnt - 1 ;
        for(int j = 2; j*j <= num ; ++j) {
            if(num % j == 0 ) {
                NUM += (1.0 + ans[j]) ;
                if(j != num/j) NUM += (1.0 + ans[num/j] ) ;
            }
        }
        NUM += 1.0 ;
        ans[i] = NUM/DEN ;
    }
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n ;
        cin >> n ;
        cout << "Case "<<_<<": ";
        cout << fixed << setprecision(10) << ans[n] << endl ;
    }
    return 0;
}

