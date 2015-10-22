#include <iostream>
#include <algorithm>

using namespace std;

int n,m[100],a[100],b[100];
bool ans;

int main(void){

  while( cin >> n , n ){

    for( int i = 0 ; i < n ; i++ ){
      cin >> m[i] >> a[i] >> b[i];
    }

    ans = false;
    for( int i = 0 ; i < n ; i++ ){
      int c = m[i]; 
      for( int j = 0 ; j < n ; j++ ){
	if( i == j ) continue;
	if( a[j] <= a[i] && a[i] < b[j] ) c+= m[j];
      }
      // 時間ないのところ全てに m を加えていく
      if( c > 150 ){
	ans = true;
	break;
      }
    }
    if( ans ) cout << "NG" << endl;
    else cout << "OK" << endl;
  }
  return 0;
}


