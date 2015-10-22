#include <iostream>
#define MAX 1000000

using namespace std;

bool prime[MAX];

void isPrime(void){

  fill( prime, prime + MAX , true );
  prime[0] = prime[1] = false;

  for( int i = 2 ; i*i < MAX ; i++ ){
    if( prime[i] ){
      for( int j = 2*i ; j < MAX ; j += i ){
	prime[j] = false;
      }
    }
  }

}

int main(void){

  isPrime();

  int x,y;
  while( cin >> x >> y , x || y ){
    int a,b;
    for( int i = x ; i >= 2 ; i-- ){
      if( prime[i] && x % i == 0 ){
	a = i;
	for( int j = i - 1 ; j >= 2 ; j-- ){
	  if( prime[j] && x % j == 0 ){
	    a -= j;
	  }
	}
	break;
      }
    }
    for( int i = y ; y >= 2 ; i-- ){
      if( prime[i] && y % i == 0 ){
	b = i;
	for( int j = i - 1 ; j >= 2 ; j-- ){
	  if( prime[j] && y % j == 0 ){
	    b -= j;
	  }
	}
	break;
      }
    }
    if( a < b ) cout << "b" << endl;
    else cout << "a" << endl;
  }
  return 0;
}


