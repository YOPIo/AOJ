#include <iostream>
#define MAX 1000001

using namespace std;

bool prime[MAX];

void hurui(void){

  fill(prime, prime + MAX, true);
  prime[0] = prime[1] = false;

  for( int i = 2 ; i*i < MAX ; i++ ){
    if( prime[i] ){
      for( int j = i + i ; j < MAX ; j += i ){
	prime[j] = false;
      }
    }
  }

}

int main(void){

  hurui();
  int a,b,n;
  while( cin >> a >> b >> n , a + b + n ){

    int cnt = 0;
    for( int i = a ; i < MAX ; i += b ){
      if( prime[i] ) cnt++;
      if( cnt == n ){
	cout << i << endl;
	break;
      }
    }

  }
  return 0;
}


