#include <iostream>
#define INF 999999999

using namespace std;

int main(void){

  int e;
  while( cin >> e , e ){

    int ans = INF;
    for( int a = 0 ; a*a*a <= e ; a++ ){
      for( int b = 0 ; b*b + a*a*a <= e ; b++ ){
	ans = min( ans , e - a*a*a - b*b + b + a ); 
      }
    }
    cout << ans << endl;
  }
  return 0;
}


