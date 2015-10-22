#include <iostream>
#define MAX 1000000

using namespace std;

int isprime[MAX];

void ERATOSUTENESUNOHURUI(void){

  for( int i = 0 ; i < MAX ; i++ ) isprime[i] = 1;
  isprime[0] = isprime[1] = 0;

  for( int i = 2 ; i*i < MAX ; i++ ){
    if( isprime[i] ){
      for( int j = i+i ; j < MAX ; j += i ){
	isprime[j] = 0;
      }
    }
  }

}


int main(void){

  ERATOSUTENESUNOHURUI();

  int n;
  while( cin >> n , n ){
 
    int cnt = 0;
    for( int i = 2 ; i <= n/2 ; i++ ){
      if( isprime[i] && isprime[n - i] ) cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}


