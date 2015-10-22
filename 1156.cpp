#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define MAX_W 31
#define MAX_H 31
#define INF 1 << 28

using namespace std;

int w, h;
int g[MAX_H][MAX_W], c[4];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

struct state{
  int x, y, dir, cost;
  bool operator < (const state &s) const {
    return cost > s.cost;
  }
};

int bfs(void){
  
  priority_queue<state> Q;
  int cost[MAX_H][MAX_W][4];
  
  Q.push((state){0,0,0,0});
  fill(cost[0][0], cost[MAX_H][0], INF);
  cost[0][0][0] = 0;
  
  while(!Q.empty()){

    const state s = Q.top();
    Q.pop();
    
    if(cost[s.y][s.x][s.dir] < s.cost) continue;
    if(s.y == h - 1 && s.x == w - 1) return s.cost;

    for(int i = 0 ; i < 4 ; i++){

      state t = s;
      t.cost += (g[s.y][s.x] == i ? 0 : c[i]);
      t.dir = (t.dir + i) % 4;
      t.y += dy[t.dir];
      t.x += dx[t.dir];

      if(t.x < 0 || t.x >= w) continue;
      if(t.y < 0 || t.y >= h) continue;
      if(cost[t.y][t.x][t.dir] > t.cost){
	Q.push(t);
	cost[t.y][t.x][t.dir] = t.cost;
      }
    }
  }
  return INF;  
}

int main(void){
  
  while(cin >> w >> h, w + h){
    
    for(int i = 0 ; i < h ; i++)
      for(int j = 0 ; j < w ; j++)
	cin >> g[i][j];
    
    for(int i = 0 ; i < 4 ; i++) cin >> c[i];
    
    cout << bfs() << endl;
  }
  return 0;
}



