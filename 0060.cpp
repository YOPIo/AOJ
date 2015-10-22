#include <iostream>

using namespace std;

int main(void){

  int a,b,c;
  int cards[11];
  int mycards;

  while( cin >> a >> b >> c ){

    for( int i = 1 ; i <= 10 ; i++ ){
      cards[i] = 1;
    }
    mycards = a + b;
    cards[a] = cards[b] = cards[c] = 0;

    double cnt = 0;
    for( int i = 1 ; i <= 10 ; i++ ){
      if( cards[i] && mycards + i <= 20 ){
	cnt++;
      }
    }
    if( cnt / 7 * 100 >= 50 ) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}


