#include <iostream>
#include <algorithm>
#define MAX 2000
#define INF 999999

using namespace std;

int COST[MAX + 1][MAX + 1];
int TIME[MAX + 1][MAX + 1];
int v[MAX + 1];
bool visit[MAX + 1];
int n,m,k,p,q,r,ti,co;
int from,too;
int MI,mi;

int get_time(void){ // ダイクストラ法

  for( int i = 0 ; i <= MAX ; i++ ){ // 初期化
    visit[i] = false;
    v[i] = INF;
  }


  v[p] = 0; // 最初の位置を0にする

  while(1){

    mi = INF;

    for( int i = 1 ; i <= m ; i++ ){ // 訪れていない最小時間とその添字を求める
      if( !visit[i] && v[i] < mi ){
	MI = i;
	mi = v[i];
      }
    }

    if( mi == INF ) break;
    visit[MI] = true; // 訪れたことにする

    for( int i = 1 ; i <= m ; i++ ){
      if( TIME[MI][i] + v[MI] < v[i] ){
	v[i] = TIME[MI][i] + v[MI];
      }
    }
  }
  return v[q];
}

int get_cost(void){

  for( int i = 0 ; i <= MAX ; i++ ){
    v[i] = INF;
    visit[i] = false;
  }

  v[p] = 0; 

  while(1){

    mi = INF;

    for( int i = 1 ; i <= m ; i++ ){
      if( !visit[i] && v[i] < mi ){
	MI = i;
	mi = v[i];
      }
    }

    if( mi == INF ) break;
    visit[MI] = true;

    for( int i = 1 ; i <= m ; i++ ){
      if( COST[MI][i] + v[MI] < v[i] ){
	v[i] = COST[MI][i] + v[MI];
      }
    }
  }
  return v[q];
}



int main(void){

  while( cin >> n >> m , n || m ){

    for( int i = 0 ; i <= MAX ; i++ ){
      for( int j = 0 ; j <= MAX ; j++ ){ // 初期化
	TIME[i][j] = INF;
	COST[i][j] = INF;
      }
    }

    for( int i = 0 ; i < n ; i++ ){
      cin >> from >> too >> co >> ti;
      COST[from][too] = COST[too][from] = co;
      TIME[from][too] = TIME[too][from] = ti;
    }

    cin >> k; // 問い合わせの数

    for( int i = 0 ; i < k ; i++ ){
      cin >> p >> q >> r;

      switch(r){
      case 0: // 最小金額
	cout << get_cost() << endl;
	break;
      case 1: // 最小時間
	cout << get_time() << endl;
      }

    }

  }
  return 0;
}


