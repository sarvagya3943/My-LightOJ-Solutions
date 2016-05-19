
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
    rep(_,1,t)
    {
        int n;
        cin>>n;
        map<int,int>m;
        map<int,string>Y;
        string s;
        int x,y,z;
        while(n--)
        {
            cin>>s>>x>>y>>z;
            m[x*y*z]++;
            Y[x*y*z] = s ;
        }
        bool yes = false;
        vector<int>score;
        for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
            {
                yes = true;
                score.push_back(it->first);
            }
        }
        sort(all(score));
        cout << "Case "<<_<<": ";
        if(yes==false)cout<<"no thief\n";
        else{
            cout << Y[*score.rbegin()] <<" took chocolate from "<<Y[score[0]]<<endl;
        }
    }
    return 0;
}
