#include <iostream>
#include <queue>
#include <vector>
#define MAX 1000

using namespace std;

const int INF = 1000000;

typedef pair<int,int> P;

int n,m;
char cheese[MAX+1][MAX+1];
 
int bfs(int sy,int sx,int gy,int gx){
    
  int dx[4]={1,0,-1,0};
  int dy[4]={0,1,0,-1};
  int d[MAX][MAX];
  queue<P> q;
     
    for( int i = 0 ; i < n ; i++ )
        for( int j = 0 ; j < m ; j++ )
            d[i][j] = INF;
     
    q.push( P(sy , sx) );
    d[sy][sx] = 0;
     
    while( q.size() ){
        P p = q.front(); 
	q.pop();

        if(p.first == gy && p.second == gx) break;
	
        for(int i = 0 ; i < 4 ; i++){
	  int x = p.first + dx[i];
	  int y = p.second + dy[i];
          
	  if( 0 <= x && x < n &&
	      0 <= y && y < m &&
	      d[x][y] == INF &&
	      cheese[x][y]!='X'){
	    q.push( P(x , y) );
	    d[x][y] = d[p.first][p.second] + 1;
	  }
        }
    }
    
    return d[gy][gx];
}

int main(void){

    int num;
 
    cin >> n >> m >> num;
    vector<P> v(num + 1);
     
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++ ){
            cin >> cheese[i][j];
            if( cheese[i][j]=='S'){
                v[0].first = i;
                v[0].second = j;
            }
            if('1' <= cheese[i][j] && cheese[i][j] <= '9'){
                v[cheese[i][j]-'0'].first = i;
                v[cheese[i][j]-'0'].second = j;
            }
        }
    }
     
    int sum = 0;
    for(int i = 1 ; i < num+1 ; i++){
        sum += bfs(v[i-1].first,v[i-1].second,v[i].first,v[i].second);
    }
    cout << sum << endl;
     
    return 0;
}





