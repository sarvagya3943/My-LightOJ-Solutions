
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

double arr[1000005];
int main()
{
    arr[0] = arr[1]=0.0 ;
    rep(i,2,1000000)
    {
        arr[i] = arr[i-1] + log(i);
    }
    int t;
    cin>>t;
    rep(_,1,t)
    {
        int n,b;
        cin>>n>>b;
        double ans = arr[n]/log(b) + 1.0;
        cout << "Case "<<_<<": ";
        cout << fixed << setprecision(10) << (int)floor(ans) <<endl;
    }
    return 0;
}
