#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s[300];
int dx[8] = {0,0,1,-1,-1,-1,1,1};
int dy[8] = {1,-1,0,0,-1,1,-1,1}; 

int dfs( int i , int j , int n ){

  int cnt = 0;
  for( int k = 0 ; k < 8 ; k++ ){
    int cnt2 = 0;
    int x = i;
    int y = j;
    while( 0 <= x && x < n && 0 <= y && y < n ){
      if( s[x][y] == '1' ){
	x += dx[k];
      y += dy[k];
      cnt2++;
      }
      else break;
    }
    cnt = max( cnt , cnt2 ); 
    //８方向動かして、カウント
  }
  return cnt;
}

int main(void){
  
  while(1){

    int n;
    cin >> n;
    if( n == 0 ) break;
    
    for( int i = 0 ; i < n ; i++ ){
      cin >> s[i];
    }
    
    int ans = 0;
    for( int i = 0 ; i < n ; i++ ){
      for( int j = 0 ; j < n ; j++ ){
	if( s[i][j] == '1' ){
	  ans = max( ans , dfs(i,j,n) );
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}


