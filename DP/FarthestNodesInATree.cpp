
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

const int maxn = 30000 + 6 ;
vector<pair<int,int> > graph[maxn] ;
int nodes , dis[3][maxn] ;
bool vis[maxn] ;
void bfs(int root , int i)
{
    for(int j = 1; j <= nodes; ++j) {
        dis[i][j] = 0 ;
        vis[j] = false ;
    }
    queue<int> Q ;
    dis[i][root] = 0 ;
    vis[root] = true ;
    Q.push(root) ;
    while(not Q.empty()) {
        int node = Q.front() ;
        Q.pop() ;
        for(vector<pair<int,int> > :: iterator it = graph[node].begin() ; it != graph[node].end() ; ++it) {
            if(not vis[it->first]) {
                dis[i][it->first] = dis[i][node] + it->second ;
                Q.push(it->first) ;
                vis[it->first] = true ;
            }
        }
    }
    return ;
}
int main()
{
    int t;
    scanf("%d",&t) ;
    rep(_,1,t)
    {
        scanf("%d",&nodes) ;
        for(int i = 1 ; i <= nodes ; ++i)graph[i].clear() ;
        for(int i = 1 ; i < nodes ; ++i) {
            int u , v , w ;
            scanf("%d%d%d",&u,&v,&w) ;
            u++ , v++ ;
            graph[u].pb({v,w}) ;
            graph[v].pb({u,w}) ;
        }
        bfs(1,0) ;
        int farthest ;
        int Max = 0 ;
        for(int i = 1;  i <= nodes ; ++i) {
            Max = max(Max , dis[0][i]) ;
        }
        for(int i = 1 ; i <= nodes ; ++i) {
            if(Max == dis[0][i]) {
                farthest = i ; break ;
            }
        }
        bfs(farthest,1) ;
        Max = 0 ;
        for(int i = 1;  i <= nodes ; ++i) {
            Max = max(Max , dis[1][i]) ;
        }
        for(int i = 1 ; i <= nodes ; ++i) {
            if(Max == dis[1][i]) {
                farthest = i ; break ;
            }
        }
        bfs(farthest,2) ;
        printf("Case %d:\n",_) ;
        rep(i,1,nodes) {
            printf("%d\n",max(dis[1][i] , dis[2][i]));
        }
    }
    return 0;
}
