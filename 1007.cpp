#include <iostream>
#include <cstdio>
#define MAX 10

using namespace std;

int n;
int output[MAX][MAX];

void compute(void){

  int x,y,v;
  for( int i = 1 ,x = 0,y = 0,v = 0 ; i <= n*n ; i++ ){
    output[x][y] = i;
    if( v == 0 ){ // 右上上昇
	x++;
	y--;
	if( y < 0 && x >= n ){ // 右上の角
	  y = 1;
	  x = n - 1;
	  v = 1;
	}else if( y < 0 ){ // y軸だけオーバー
	  y = 0 ;
	  v = 1;
	}else if( x >= n ){ // x軸だけオーバー
	  y += 2;
	  x = n - 1;
	  v = 1;
	}
      }else{ // 左下下降
	x--;
	y++;
	if( x < 0 && y >= n ){ // 左下の角
	  x = 1;
	  y = n - 1;
	  v = 0;
	}else if( x < 0 ){ // x軸だけオーバー
	  x = 0;
	  v = 0;
	}else if( y >= n ){ // y軸だけオーバー
	  y = n - 1;
	  x += 2;
	  v = 0;
	}	
    }
  }
}


int main(void){

  int CN = 1;
  while( cin >> n , n ){
    cout << "Case " << CN << ":" << endl;
    compute();
    CN++;
    for( int i = 0 ; i < n ; i++ ){
      for( int j = 0 ; j < n ;j++ ){
	printf("%3d",output[j][i]);
      }
      cout << endl;
    }
  }
  return 0;
}


