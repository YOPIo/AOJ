#include <iostream>

using namespace std;

int main(void){
  int n,m;
  char IOI[1000002];

  while( cin >> n , n ){
    cin >> m;
    cin >> IOI;

    int cnt = 0;
    for( int i = 0 ; i < m ; i++ ){
      if( IOI[i] != 'I') continue;

      int j = 0;
      for( ++i ; i < m & j < n ; i+= 2 , j++ ){
	if( IOI[i] != 'O' || IOI[i + 1] != 'I' ) break;
      }
      // O が m 個あるか調べる
      if( j < n ){
	i--;
	continue;
	// O が m 個ないかbreak
      }
      for( ++cnt ; i < m ; i += 2 , cnt++ ){
	if( IOI[i] != 'O' || IOI[i + 1] != 'I' ) break;
	// 指定された数のIOI文があり、後半にOIがあるなら続く限りcntを増やす
      }
      i--;
    }
    cout << cnt << endl; 
  }
  return 0;
}


