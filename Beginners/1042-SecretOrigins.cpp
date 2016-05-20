
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
        int n;
        cin>>n;
        string s = "";
        while(n)
        {
            if(n%2)s+='1';
            else s+='0';
            n/=2;
        }
        reverse(all(s));
        s = '0' + s ;
        string temp;
        int cnt = 0;
        do{
            cnt++;
            temp=s;
            if(cnt==2)break;
        }while(next_permutation(all(s)));
        n = temp.size();
        int b=1;
        int ans = 0;
        for(int i=n-1;i>=0;--i)
        {
            ans = ans + (temp[i]-'0')*b;
            b*=2;
        }
        cout << "Case "<<_<<": "<<ans<<endl;
    }
    return 0;
}
