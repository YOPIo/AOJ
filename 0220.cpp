#include <iostream>

using namespace std;

int main(void){

  double n;
  while( cin >> n , n > 0 ){

    if( n >= 256 ){
      cout << "NA" << endl;
      continue;
    }

    int l[8],r[4];
    int N = n;
    n = n - N;
    for( int i = 7 ; i >= 0 ; i-- ){
      l[i] = N % 2;
      N /= 2;
    }

    for( int i = 0 ; i < 4 ; i++ ){
      r[i] = n * 2;
      n *= 2;
      int t = n;
      n = n - t;
    }
    if( n != 0 ){
      cout << "NA" << endl;
      continue;
    }

    for( int i = 0 ; i < 8 ; i++ )
      cout << l[i];
    cout << '.';
    for( int i = 0 ; i < 4 ; i++ )
      cout << r[i];
    cout << endl;

  }
  return 0;
}


