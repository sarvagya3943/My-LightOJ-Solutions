
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
#define PI 3.14159265359

int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        double R1,R2,R3;
        cin>>R1>>R2>>R3;
        double a,b,c;
        a = R1+R2 , b=R2+R3 , c=R3+R1 ;
        double s = (a+b+c)/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        double theta1 = acos((a*a+c*c-b*b)/(2*a*c));
        //cout<<theta1 << endl;
        area -= (theta1*R1*R1)/2;
        double theta2 = acos((a*a+b*b-c*c)/(2*a*b));
        //cout << theta2 << endl;
        area -= (theta2*R2*R2)/2;
        double theta3 = acos((-a*a+b*b+c*c)/(2*c*b));
        //cout << theta3 << endl;
        area -= (theta3*R3*R3)/2;
        cout << "Case "<<_<<": ";
        cout << fixed << setprecision(11) << area << "\n";
    }
    return 0;
}
