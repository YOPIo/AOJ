#include <iostream>
#include <string.h>
#include <queue>

using namespace std;
typedef pair<int, int> P;

char t[20][20];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int ans,h,w;
queue<P> q;

int bfs(int x, int y){

  q.push( P(x, y) );
  
  while( !q.empty() ){
    P now = q.front();
    q.pop();
    for( int i = 0 ; i < 4 ; i++ ){
      int nx = now.first + dx[i];
      int ny = now.second + dy[i];
      if( 0 <= nx && nx < w && 0 <= ny && ny <= h 
	  && t[ny][nx] == '.' ){
	t[ny][nx] = '#';
	q.push( P(nx, ny) );
	ans++;
      }
    }
  }
  return ans;
}

int main(void){

  int x,y;
  while( cin >> w >> h, h + w ){

    memset( t, 0, sizeof(t) );
    ans = 1;

    for( int i = 0 ; i < h ; i++ ){
      for( int j = 0 ; j < w ; j++ ){
	cin >> t[i][j];
	if( t[i][j] == '@' ){
	  x = j;
	  y = i;
	}
      }
    }
    cout << bfs(x,y) << endl;
  }
  return 0;
}


