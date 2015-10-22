
// 以下４パターンを考えてやる
// 上に曲がったので次曲がれない
// 上に進んだので次曲がれる
// 右に曲がったので次曲がれない
// 右に進んだので次曲がれる


#include <iostream>
#define up_can 0
#define up_cant 1
#define right_can 2
#define right_cant 3

using namespace std;

typedef long long ll;

int dp[100][100][4];

void getAns(int w, int h){

  for( int i = 0 ; i < h ; i++ )
    for( int j = 0 ; j < w ; j++ ){
      // 初期化
      dp[i][j][up_can] = dp[i][j][up_cant] = 0;
      dp[i][j][right_can] = dp[i][j][right_cant] = 0;
    }

  dp[0][1][up_can] = 1;
  dp[1][0][right_can] = 1;

  for( int i = 0 ; i < h ; i++ ){
    for( int j = 0 ; j < w ; j++ ){
      dp[i][j][up_can] %= 100000;
      dp[i][j][up_cant] %= 100000;
      dp[i][j][right_can] %= 100000;
      dp[i][j][right_cant] %= 100000;   

    if( i < h - 1 ){
	// 曲がらずに（曲がれないから）進み次に曲がれる（ようになる）
	dp[i + 1][j][right_can] += dp[i][j][right_cant]; // 曲がれないから次に曲がれる
	dp[i + 1][j][right_can] += dp[i][j][right_can]; // 右にそのまま
	// 上に曲がって進み、次曲がれない
	dp[i + 1][j][right_cant] += dp[i][j][up_can];
      }
      if( j < w - 1 ){
	// 曲がらずに（曲がれないから）進み次に曲がれる（ようになる）
	dp[i][j + 1][up_can] += dp[i][j][up_cant]; //曲がれないから次に曲がれる
	dp[i][j + 1][up_can] += dp[i][j][up_can]; // 上にそのまま
	// 右に曲がって進み、次曲がれない
	dp[i][j + 1][up_cant] += dp[i][j][right_can];
      }
    }
  }

}

int main(void){

  int w,h;
  while( cin >> w >> h, w || h ){

    getAns(w, h);
    cout << ( dp[h - 1][w - 1][0] + dp[h - 1][w - 1][1] + dp[h - 1][w - 1][2] + dp[h - 1][w - 1][3] ) % 100000 << endl;

  }
  return 0;
}


