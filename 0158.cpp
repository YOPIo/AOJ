#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int cnt = 0;

    while( n != 1 ){
      
      if( n % 2 == 0 ) n /= 2;
      else n = 3*n + 1;
      cnt++;

      }
    cout << cnt << endl;
  }
    return 0;
}


