
// O(n'2 + e)
// ﾃ｣ﾂδ療｣ﾂδｪﾃ｣ﾂδ?ｦﾂｳﾂ?

#include <iostream>
#include <algorithm>
#define MAX 100
#define INF 999999

using namespace std;

int cost[MAX + 1][MAX + 1];
int mincost[MAX + 1];
bool used[MAX + 1];

int prim(int V){ // ﾃ｣ﾂδ偲｣ﾂδｼﾃ｣ﾂδ嘉ｦﾂ閉ｰ

  for(int i = 0 ; i < V ; i++){ // ﾃ･ﾂ按敕ｦﾂ慊淌･ﾂ個?
    mincost[i] = INF;
    used[i] = false;
  }

  mincost[0] = 0; 
  int res = 0 ; 

  while(true){
    int v = -1;
    for(int u = 0 ; u < V ; u++){
      if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
      // ﾃ､ﾂｽﾂｿﾃ｣ﾂ?｣ﾃ｣ﾂ?ｦﾃ｣ﾂ?ｪﾃ｣ﾂ??｣ﾂつ?｣ﾂ?､ﾃ｣ﾂ?ｧﾃｦﾂ慊?｣ﾂつづ･ﾂｰﾂ湘｣ﾂ?陛｣ﾂ??ostﾃ｣ﾂ?ｮﾃｦﾂｷﾂｻﾃ･ﾂｭﾂ療｣ﾂつ津ｦﾂ篠｢ﾃ｣ﾂ??
    }
    if(v == -1) break;
    used[v] = true; // ﾃ｣ﾂ?凖｣ﾂ?ｧﾃ｣ﾂ?ｫﾃ､ﾂｽﾂｿﾃ｣ﾂ?｣ﾃ｣ﾂ?淌｣ﾂ?禿｣ﾂ?ｨﾃ｣ﾂ?ｫﾃ｣ﾂ?凖｣ﾂつ?
    res += mincost[v];

    for(int u = 0 ; u < V ; u++){
      mincost[u] = min(mincost[u], cost[v][u]);
      // mincostﾃ｣ﾂ?ｮﾃｧﾂ｢ﾂｺﾃ･ﾂｮﾂ?
    }
  }
  return res;
}

int main(void){

  int n, m;
  while(cin >> n >> m, n + m){

    fill(cost[0], cost[MAX], INF);

    for(int i = 0 ; i < m ; i++){
      int a, b, c;
      cin >> a >> b >> c;
      cost[a][b] = cost[b][a] = c;
    }
    cout << prim(n) << endl;
  }
  return 0;
}


