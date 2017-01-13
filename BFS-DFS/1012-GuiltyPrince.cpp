
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

string grid[50];
int row,col;
int dist[50][50];
bool vis[50][50];
void dfs(int x,int y)
{
    if(x>row || x<1 || y<0 || y>=col)return ;
    if(grid[x][y]=='#')return ;
    if(vis[x][y])return;
    vis[x][y] = true;
    dist[x][y] = 0;
    dfs(x,y-1);
    dfs(x,y+1);
    dfs(x+1,y);
    dfs(x-1,y);
    return ;
}
int main()
{
    int t;
    cin>>t;
    rep(_,1,t)
    {
        cin >> col >> row ;
        rep(i,1,row)cin>>grid[i];
        memset(dist,-1,sizeof(dist));
        memset(vis,false,sizeof(vis));
        rep(i,1,row)
        {
            rep(j,0,col-1)
            {
                if(grid[i][j]=='@')
                {
                    dist[i][j] = 0;
                    dfs(i,j);
                }
            }
        }
        int ans = 0;
        rep(i,1,row)rep(j,0,col-1)if(dist[i][j]>=0)ans++;
        cout << "Case "<<_<<": "<<ans<<endl;
    }
    return 0;
}
