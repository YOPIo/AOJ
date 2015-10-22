#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(void){

  int n;
  while( cin >> n , n){

    string s;
    while(n){
      int dgt = n % 10;
      if( dgt < 0 ) dgt += 10;
      s += ( dgt + '0' );
      n = ( n - dgt ) / (-10);
    }
    reverse( s.begin() , s.end() );
    cout << s << endl;

  }
  return 0;
}


