

#include <iostream>
#include <queue>
#define MAX 20
#define INF 10000000

using namespace std;

int w, h;
char c[MAX][MAX];
int d[MAX][MAX][1024];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void change(int a[10], int x){

	for(int i = 0 ; i < 10 ; ++i){
		a[i] = x % 2;
		x /= 2;
	}

}

int change(int a[10]){

	int res = 0;
	for(int i = 9 ; i >= 0 ; --i){
		res = res * 2 + a[i];
	}
	return res;
}

int bfs(int sy, int sx, int cnt){

	queue<int> qx, qy, qbit;
	qy.push(sy);
	qx.push(sx);
	qbit.push(0);

	d[sy][sx][0] = 0;


	while(qbit.empty() == false){

		int y = qy.front();
		qy.pop();

		int x = qx.front();
		qx.pop();

		int bit = qbit.front();
		qbit.pop();

		if( bit + 1 == (1 << cnt) ){				// ?????§?????¨??????????????????????????????
			return d[y][x][bit];
		}

		int a[10];
		for(int i = 0 ; i < 4 ; ++i){

			change(a, bit);
			int ny = dy[i] + y;
			int nx = dx[i] + x;

			if( ny < 0 || nx < 0 ) continue;		// ?????????
			if( h <= ny || w <= nx) continue;		// ?????????
			if( c[ny][nx] == 'x') continue;			// ?§??????§?????????

			if( c[ny][nx] != '.'){					// ?±??????????????????§????????´???
				int num = c[ny][nx] - '0';			// ?±???????????????????ID?????????
				a[num] = 1;
			}
			int nbit = change(a);
			int nCost = d[y][x][bit] + 1;

			if( nCost < d[ny][nx][nbit] ){			// ??????????????£??????????????´??? & ???????§£?????´??°
				d[ny][nx][nbit] = nCost;
				qy.push(ny);
				qx.push(nx);
				qbit.push(nbit);
			}

		}// end of for

	}// end of while

	return -1;
}// end of bfs

void init(){

	for (int i = 0 ; i < h ; ++i){
		for (int j = 0 ; j < w ; ++j){
			for(int k = 0 ; k < 1024 ; ++k){
				d[i][j][k] = INF;
			}
		}
	}


}

int main(void){


	int si, sj;
	while( cin >> w >> h ){

		if( w == h && h == 0 ){
			break;
		}
		init();
		int cnt = 0;

		for(int i = 0 ; i < h ; ++i){
			for(int j = 0 ; j < w ; ++j){
				cin >> c[i][j];
				if( c[i][j] == 'o'){
					sj = j;
					si = i;
					c[i][j] = '.';
				}else if( c[i][j] == '*'){
					c[i][j] = '0' + cnt++;
				}
			}
		}

		cout << bfs(si, sj, cnt) << endl;

		// for(int i = 0 ; i < h ; ++i){
		// 	for(int j = 0 ; j < w ; ++j ){
		// 		cout << c[i][j];
		// 	}
		// 	cout << endl;
		// }

	}// end of while

	return 0;
}// end of main

