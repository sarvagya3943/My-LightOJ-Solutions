
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

deque<int>Q;
int main()
{
    openin;
    int t;
    scanf("%d",&t);
    rep(_,1,t)
    {
        Q.clear();
        int sz,m;
        scanf("%d%d",&sz,&m);
        printf("Case %d:\n",_);
        while(m--)
        {
            string s;
            cin>>s;
            if(s=="pushLeft")
            {
                int x;
                cin>>x;
                if(Q.size()>=sz)printf("The queue is full\n");
                else{
                        Q.push_front(x);
                    printf("Pushed in left: %d\n",x);
                }
            }
            else if(s=="pushRight")
            {
                int x;
                cin>>x;
                if(Q.size()>=sz)printf("The queue is full\n");
                else{
                    Q.push_back(x);
                    printf("Pushed in right: %d\n",x);
                }
            }
            else if(s=="popLeft")
            {
                if(Q.empty())printf("The queue is empty\n");
                else
                {
                    printf("Popped from left: %d\n",Q.front());
                    Q.pop_front();
                }
            }
            else
            {
                if(Q.empty())printf("The queue is empty\n");
                else
                {
                    printf("Popped from right: %d\n",Q.back());
                    Q.pop_back();
                }
            }
        }

    }
    return 0;
}
