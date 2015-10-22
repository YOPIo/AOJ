#include <iostream>
#define MAX 600000
using namespace std;

int is_prime[MAX];

void tenesu(void){

  for( int i = 0 ; i < MAX ; i++ ) is_prime[i] = 1;
  is_prime[0] = is_prime[1] = 0;

  for( int i = 0 ; i*i < MAX ; i++ ){
    if( is_prime[i] ){
      for( int j = 2*i ; j < MAX ; j += i ){
	is_prime[j] = 0;
      }
    }
  }
}


int main(void){

  tenesu();

  int n; 
  while( cin >> n ){

    for( int i = n - 1; i > 0 ; i-- ){
      if( is_prime[i] ){
	cout << i << " ";
	break;
      }
    }

    for( int i = n + 1; i < MAX ; i++ ){
      if( is_prime[i] ){
	cout << i << endl;;
	break;
      }
    }

  }
  return 0;
}


