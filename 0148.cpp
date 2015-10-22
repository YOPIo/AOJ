#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n ){

    while(1){
      if( n <= 39 ) break;
      else n -= 39;
    }
    cout << "3C";
    if( 1 <= n && n <= 9 ) cout << "0";
    cout << n << endl;

  }
  return 0;
}


