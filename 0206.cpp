#include <iostream>
#define MAX 100000000

using namespace std;

int main(void){

  int L;
  while( cin >> L , L ){

    int M,N;
    int ans = 0;
    for( int i = 1 ; i <= 12 ; i++ ){
      cin >> M >> N;
      L -= ( M - N );
      if( L <= 0 ){
	ans = i;
	L = MAX;
      }
    }
    if( ans ) cout << ans << endl;
    else cout << "NA" << endl;

  }
  return 0;
}


