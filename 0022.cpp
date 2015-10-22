#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int m = - 99999999;
    int s = 0;
    while(n--){

      int x;
      cin >> x;
      s += x;
      m = max( m , s );
      if( s < 0 ) s = 0;

    }
    cout << m << endl;
  }

  return 0;
}


