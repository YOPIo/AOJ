#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n >= 0  ){

    int I = 0;
    int N[1000000];
    while( n >= 4 ){
      N[I++] = n % 4;
      n /= 4;
    }
    N[I++] = n;
    for( int i = I - 1 ; i >= 0 ; i-- ) cout << N[i];
    cout << endl;

  }
  return 0;
}


