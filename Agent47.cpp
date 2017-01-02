#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <iostream>
#define CLR(a, b) memset(a, (b), sizeof(a))
using namespace std;
const int INF = 0x3f3f3f3f;
int Map[20][20], val[1<<15][20];
int dp[1<<15], H[20];
int Solve(int n, int m) {
    if(m == 0) return INF;
    if(n % m == 0) return n / m;
    else return n / m + 1;
}
int main()
{
    int t, kcase = 1;
    scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        for(int i = 0; i < n; i++ ) {
            scanf("%d", &H[i]);
        }
        for(int i = 0; i < n; i++ ) {
            char str[20]; scanf("%s", str);
            for(int j = 0; j < n; j++) {
                Map[i][j] = str[j] - '0';
            }
        }
        for(int i = 0; i < (1<<n); i++) {
            for(int j = 0; j < n; j++) {
                val[i][j] = H[j];
            }
        }
        for(int i = 1; i < (1<<n); i++) {
            for(int j = 0; j < n; j++) {
                if(i & (1<<j)) {
                    int s = i ^ (1<<j);
                    for(int k = 0; k < n; k++) {
                        if(s & (1<<k)) {
                            val[s][j] = min(val[s][j], Solve(H[j], Map[k][j]));
                        }
                    }
                }
            }
        }
        dp[0] = 0;
        for(int i = 1; i < (1<<n); i++) {
            dp[i] = INF;
            for(int j = 0; j < n; j++) {
                if(i & (1<<j)) {
                    int s = i ^ (1<<j);
                    dp[i] = min(dp[i], dp[s] + val[s][j]);
                }
            }
        }
        printf("Case %d: %d\n", kcase++, dp[(1<<n)-1]);
    }
    return 0;
}
