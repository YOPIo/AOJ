#include <iostream>

using namespace std;

int w, h, cnt;
int island[51][51];
int dx[] = {1, 1, 0, -1, -1, -1,  0,  1};
int dy[] = {0, 1, 1,  1,  0, -1, -1, -1};

bool check(int nx, int ny){

  if(nx < 0 || ny < 0 || w <= nx || h <= ny)return false;
  else return true;

}

void dfs(int sy, int sx){

  island[sy][sx] = 0;

  for(int i = 0 ; i < 8 ; i++){
    int nx = sx + dx[i];
    int ny = sy + dy[i];
    if(!check(nx, ny)) continue;
    if(island[ny][nx]) dfs(ny, nx);
  }
}

int main(void){

  while(cin >> w >> h, w || h){

    for(int i = 0 ; i < h ; i++)
      for(int j = 0 ; j < w ; j++)
	cin >> island[i][j];

    int cnt = 0;
    for(int i = 0 ; i < h ; i++){
      for(int j = 0 ; j < w ; j++){
	if(island[i][j]){
	  dfs(i, j);
	  cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}


