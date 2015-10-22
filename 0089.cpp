
// 大きい方を選ぶだけ

#include <iostream>

using namespace std;

int main(void){

  int g[128][128], n;
  int i = 0, j = 0;

  while( cin >> n ){
    g[i][j++] = n;
    char c = cin.get();
    if( c == '\n' ){
      i++;
      j = 0;
    }
  }

  int dp[128][128] = {0};
  dp[0][0] = g[0][0];

  for( int a = 1 ; a < i + 1 ; a++ ){
    for( int b = 0 ; b < a + 1 ; b++ ){
      if( a < i/2 + 1 ){
	if(!b) dp[a][b] = dp[a - 1][b] + g[a][b]; // 左端
	else if( b == a ) dp[a][b] = dp[a - 1][b - 1] + g[a][b]; // 右端
	else dp[a][b] = max(dp[a - 1][b], dp[a - 1][b - 1]) + g[a][b];
      }else dp[a][b] = max(dp[a -1][b], dp[a - 1][b + 1]) + g[a][b];
    }
  }
  cout << dp[i][0] << endl;
  return 0;
}


