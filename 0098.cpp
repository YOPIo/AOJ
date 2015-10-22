#include <iostream>
#include <algorithm>
#define MAX 100
#define INF 9999999

using namespace std;

int s[MAX + 1][MAX + 1];

int main(void){

  int n;
  cin >> n;
  for( int i = 1 ; i <= n ; i++ ){
    for( int j = 1 ; j <= n ; j++ ){
      int in;
      cin >> in;
      // (0,0)から(i,j)までの和を入れる 
      s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + in;
    }
  }
 
  int res = -INF;

  for( int i = 1 ; i <= n ; i++ ){ // 終点y座標
    for( int j = 1 ; j <= n ; j++ ){ // 終点x座標
      for( int y = 1 ; y <= i ; y++ ){ // 始点y座標
	for( int x = 1 ; x <= j ; x++){ // 始点x座標
	  res = max( res , s[i][j] - s[i][x - 1] - s[y - 1][j] + s[y - 1][x - 1] );
	}
      }
    }
  }
  cout << res << endl;

  return 0;
}


