#include <iostream>
#define MAX 100000

using namespace std;

bool isPrime[MAX];

void is_Prime(void){

  for( int i = 0 ; i < MAX ; i++ )
    isPrime[i] = true;

  isPrime[0] = isPrime[1] = false;

  for( int i = 0 ; i*i < MAX ; i++ ){
    if(isPrime[i]){
      for( int j = 2*i ; j < MAX ; j += i ){
	isPrime[j] = false;
      }
    }
  }
}

int main(void){

  is_Prime();

  int n;
  while( cin >> n ){
    int cnt = 0;
    for( int i = 1 ; i <= n ; i++ ){
      if( isPrime[i] && isPrime[n + 1 - i] ) cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}


