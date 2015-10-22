#include <cstdio>
#include <algorithm>
using namespace std;
 
int main(){
    int n, m, s, g1, g2, b1, b2, c, d[101][101];
    const int INF = 700000000;
    while(scanf("%d%d%d%d%d", &n, &m, &s, &g1, &g2), n){
        for(int i = 0; i <= n; ++i){
            for(int j = 0; j <= n; ++j){
                d[i][j] = INF;
            }
            d[i][i] = 0;
        }
         
        for(int i = 0; i < m; ++i){
            scanf("%d%d%d", &b1, &b2, &c);
            d[b1][b2] = c;
        }
         
        for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
         
        int ans = INF;
        for(int i = 1; i <= n; ++i){
            ans = min(ans, d[s][i] + d[i][g1] + d[i][g2]);
        }
        printf("%d\n", ans);
    }
}


