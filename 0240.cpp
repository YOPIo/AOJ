#include <iostream>
#include <cmath>

using namespace std;

double y,r,ans,genri;
int n,t,b,ansn;

int main(void){

  while( cin >> n , n ){

    cin >> y; // 預ける年数
    ans = 0;

    for( int i = 0 ; i < n ; i++ ){
    
      cin >> b >> r >> t;
      
      switch(t){
      case 1: // 単利
	genri = 10000 * ( 1 + y * (r / 100) );
	break;
      case 2: // 複利
	genri = 10000 * pow( (double)( 1 + r / 100 ), y );
	break;
      }
      // cout << genri << endl;
      if( ans < genri ){
	ans = genri;
	ansn = b;
      }
    }
    cout << ansn << endl;
  }
  return 0;
}


