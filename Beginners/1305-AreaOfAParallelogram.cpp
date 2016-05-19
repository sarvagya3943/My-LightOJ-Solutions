
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
    //openin;
    int t;
    cin>>t;
    rep(i,1,t)
    {
        double mx,my;
        int Ax,Ay,Bx,By,Cx,Cy;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        mx = (double)(Ax+Cx)/2;
        my = (double)(Ay+Cy)/2;
        double Dx,Dy;
        Dx = 2*mx - Bx ;
        Dy = 2*my - By ;
        double area = (Cx-Ax)*(Dy-By) - (Dx-Bx)*(Cy-Ay);
        cout << "Case "<<i<<": ";
        cout <<(int) Dx << " " <<(int) Dy << " " << (int)fabs(area/2) << "\n";
    }
    return 0;
}
