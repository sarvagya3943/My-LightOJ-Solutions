
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
    cin>>t;
    rep(_,1,t)
    {
        int r1,r2,c1,c2;
        cin >> r1 >> c1 >> r2 >> c2 ;
        int res ;
        int a = (r1+c1)%2 , b = (r2+c2)%2;
        if(a!=b)res=-1;
        else if(abs(r1-r2)==abs(c1-c2))res=1;
        else res=2;
        cout << "Case "<<_<<": ";
        if(res==-1)cout<<"impossible\n";
        else cout<<res<<endl;
    }
    return 0;
}
