#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int dp[17][17];
  int x,y,n;
  while( cin >> x >> y , x + y ){

    fill(dp[0], dp[17], 0 );
    dp[1][1] = 1;

    int a,b;
    cin >> n;
    for( int i = 0 ; i < n ; i++ ){
      cin >> a >> b;
      dp[b][a] = -1; // 通れないを -1      
    }

    for( int i = 1 ; i <= y ; i++ ){
      for( int j = 1 ; j <= x ; j++ ){
	if( dp[i][j] != -1 ){
	  if( i != 1 && dp[i - 1][j] != -1 )
	    dp[i][j] += dp[i - 1][j];
	  if( j != 1 && dp[i][j - 1] != -1 )
	    dp[i][j] += dp[i][j - 1];
	}
      }
    }
    cout << dp[y][x] << endl;
  }
  return 0;
}


