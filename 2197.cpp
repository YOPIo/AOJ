#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n, n ){

    int ans = 0 ;
    for( int i = 1 ; i < n ; i++ ){
      int sum = 0;
      for( int j = i ; j < n ; j++ ){
	sum += j;
	if( sum == n ) ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}


