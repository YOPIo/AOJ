#include <iostream>

using namespace std;

int main(void){

  long long n;

  while( cin >> n , n ){

    long long total = -n;
    for( int i = 1 ; i*i < n ; i++ ){
      if( !(n % i) ){
	total += i + ( n / i );
      }
    }
    if( n == total ) cout << "perfect number" << endl;
    if( n < total ) cout << "abundant number" << endl;
    if( n > total ) cout << "deficient number" << endl;

  }
  return 0;
}


