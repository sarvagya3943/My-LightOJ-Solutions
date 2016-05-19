
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

int arr[50][50];
int main()
{
    //openin;
    int t;
    cin>>t;
    rep(_,1,t)
    {
        bool cnt[50] = {false};
        int n,m,k;
        cin>>n>>m>>k;
        rep(i,1,n)
        {
            rep(j,1,k)
                cin>>arr[i][j];
        }
        int p,x;
        cin>>p;
        rep(i,1,p)
        {
            cin>>x;
            cnt[x] = true;
        }
        bool happy = true;
        bool temp ;
        rep(i,1,n)
        {
            temp = false;
            rep(j,1,k)
            {
                if(arr[i][j]<0)
                {
                    if(cnt[abs(arr[i][j])]==false)temp=true;
                }
                else {
                    if(cnt[arr[i][j]]==true)temp=true;
                }
            }
            happy &= temp;
        }
        cout << "Case "<<_<<": ";
        if(happy)cout << "Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
