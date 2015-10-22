#include <iostream>
#define MAX 10000000

using namespace std;

bool prime[MAX];

void isPrime(void){

  fill( prime , prime + MAX , true );
  prime[0] = prime[1] = false;

  for( int i = 2 ; i*i < MAX ; i++ )
    if( prime[i] ){
      for( int j = 2*i ; j < MAX ; j += i ){
	prime[j] = false;
      }
    }

}

int main(void){

  isPrime();

  int n;
  while( cin >> n , n ){

    for( int i = n ; i >= 0 ; i-- ){
      if( prime[i] && prime[i - 2] && prime[i - 6] && prime[i - 8] ){
	cout << i << endl;
	break;
      }
    }
 
  }
  return 0;
}


