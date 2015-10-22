#include <iostream>
#include <cstdio>

#define INF 99999
#define MAX 20

using namespace std;

int grapha[MAX + 1][MAX + 1];
bool visited[MAX + 1];
int v[MAX + 1];
int n,m;

int Dijkstra( int start, int goal ){ // ダイクストラ法


  for( int i = 0 ; i <= MAX ; i++ ){ // 初期化
    v[i] = INF;
    visited[i] = false;
  }

  v[start] = 0; // スタート地点を0にする
  while(1){
    int mn = INF;
    int MN;
    for( int i = 1 ; i <= n ; i++ ){
      if( v[i] < mn && !visited[i] ){
	mn = v[i];
	MN = i;
      }
    }
    if( mn == INF ) break; // すべて訪問(INFが変わらなかった)したのでbreak
    visited[MN] = true; // 訪問済みにする

    for( int i = 1 ; i <= n ; i++ ){
      if( grapha[MN][i] + v[MN] < v[i] ){ // 小さい方を代入
	v[i] = v[MN] + grapha[MN][i];
      }
    }
  }
  return v[goal];
}

int main(void){

  int a,b,c,d;
  int x1,x2,y1,y2;

  cin >> n >> m;

  for( int i = 0 ; i <= MAX ; i++ )
    for( int j = 0 ; j <= MAX ; j++ )
      grapha[i][j] = INF; //  grapha初期化

  for( int i = 0 ; i < m ; i++ ){ // i番目の街道の情報を読む
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    grapha[a][b] = c;
    grapha[b][a] = d;
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2); 
  // 大工の出発点、柱のある点、殿からもらったお金、柱の代金

  int ans = y1;
  ans -= Dijkstra(x1,x2);
  // cout << Dijkstra(x1,x2) << endl;
  ans -= Dijkstra(x2,x1);
  // cout << Dijkstra(x2,x1) << endl;
  ans -= y2;

  cout << ans << endl;

  return 0;
}


