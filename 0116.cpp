#include <iostream>
#include <algorithm>
#include <stack>
#define MAX 500

using namespace std;

int compute( int h[] , int n ){

  stack < pair<int,int> > st;
  h[n] = 0;
  
  int cmax = 0;
  for( int i = 0 ; i <= n ; i++ ){
    if( st.empty() || st.top().second < h[i] ){
      st.push( make_pair( i , h[i]) );
    }
    else if( st.top().second > h[i] ){
      int iback,jback;
      do{
	iback = st.top().first;
	jback = st.top().second;
	cmax = max( cmax , (i - iback) * jback ); 
	st.pop();
      }while( !st.empty() && st.top().second > h[i] );
      
      st.push( make_pair( iback , h[i] ) );
    }
  }
  return cmax;
}

int main(void){
  
  int h,w;
  char c[MAX][MAX];
  int C[MAX][MAX];

  while( cin >> h >> w , h || w ){
 
    for( int i = 0 ; i < h ; i++ ){
      for( int j = 0 ; j < w ; j++ ){
	cin >> c[i][j]; // 読み込み
      }
    }
    // ここから'*'だったら0,'.'なら1を入れる
    for( int j = 0 ; j < w ; j++ ){
      if( c[0][j] == '.' ) C[0][j] = 1;
      else C[0][j] = 0;
    }
    // ここから'*'だったら0,'.'ならその行の上の数+1を行う
    // すなわち、縦の長さがわかる
    for( int i = 1 ; i < h ; i++ ){
      for( int j = 0 ; j < w ; j++ ){
	if( c[i][j] == '*' ) C[i][j] = 0;
	else C[i][j] = C[i - 1][j] + 1;
      }
    }

    int ans = 0; 
    for( int i = 0 ; i < h ; i++ ){
      ans = max( ans , compute( C[i] , w ) );
    }
    cout << ans << endl;
  }
  return 0;
}


