#include <iostream>
#include <algorithm>
#define MAX 1000

using namespace std;

int compute( char c[MAX][MAX] , int n ){
  
  int a[MAX][MAX];
  
  for( int i = 0 ; i < n ; i++ ){
    a[0][i] = ( c[0][i] == '*' ) ? 0 : 1;
    a[i][0] = ( c[i][0] == '*' ) ? 0 : 1;
  }
  
  int ans = 0;
  for( int i = 1 ; i < n ; i++ ){
    for( int j = 1 ; j < n ; j++ ){
      if( c[i][j] == '*' ) a[i][j] = 0;
      else{
	// a[i][j - 1] a[i - 1][j - 1] a[i - 1][j]
	// の３つうち最も小さいものを選び+1する
	a[i][j] = min( a[i - 1][j - 1] , min( a[i - 1][j] , a[i][j - 1] ) ) + 1;
	ans = max( ans , a[i][j] );
      }
      //   cout << a[i][j] << " ";      
    }
    //cout << endl;
  }
  return ans;
}
int main(void){
  
  char c[MAX][MAX];
  int n;
  
  while( cin >> n , n ){

    for( int i = 0 ; i < n ; i++ )
      for( int j = 0 ; j < n ; j++ )
	cin >> c[i][j];  // 読み込み
    
    cout << compute( c , n ) << endl;
  }
  return 0;
}


