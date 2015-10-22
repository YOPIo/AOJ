#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int h,w;
  cin >> h >> w;

  int rote[51][51] = {0};
  char c;
  for( int i = 1 ; i <= h ; i++ ){
    for( int j = 1 ; j <= w ; j++ ){
      cin >> c;
      rote[i][j] = c - '0';
    }
  }

  for( int i = 1 ; i <= h ; i++ ){
    for( int j = 1 ; j <= w ; j++ ){
      if( i == 1 ){
	rote[i][j] += rote[i][j - 1];
      }else if( j == 1 ){
	rote[i][j] += rote[i - 1][j];
      }else{
	rote[i][j] += min(rote[i - 1][j], rote[i][j - 1]);
      }
    }
  }
  cout << rote[h][w] << endl;
  return 0;
}


