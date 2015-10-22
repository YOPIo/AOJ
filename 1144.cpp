#include <iostream>

using namespace std;
 
int x, y, ans;
int m[20][20];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void dfs(int now, int X, int Y) {
  
  if (now >= ans) return;

  for (int i = 0; i < 4; i++) {
    int nx = X + dx[i];
    int ny = Y + dy[i];
    if (nx < 0 || x <= nx || ny < 0 || y <= ny || m[ny][nx] == 1) continue;
    
    while (1) {
      if (m[ny][nx] == 3) {
	ans = now;
	return;
      }
      nx += dx[i];
      ny += dy[i];
      if (nx < 0 || x <= nx || ny < 0 || y <= ny) {
	break;
      }
      if (m[ny][nx] == 1) {
	m[ny][nx] = 0;
	dfs(now + 1, nx - dx[i], ny - dy[i]);
	m[ny][nx] = 1;
	break;
      }
    }
  }
}
 
int main(void) {

  while (cin >> x >> y, x + y) {

    int sx, sy;
    for (int i = 0; i < y; i++) {
      for (int j = 0; j < x; j++) {
	cin >> m[i][j];
	if (m[i][j] == 2) {
	  sx = j;
	  sy = i;
	}
      }
    }
    ans = 11;
    dfs(1, sx, sy);
    if (ans > 10) ans = -1;
    cout << ans << endl;
  }
   return 0;
}


