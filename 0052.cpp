#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n ){
    if( n == 0 )return 0;
    int ans = 0;
    while( n >= 5 ){
      n /= 5;
      ans += n;
    }
    cout << ans << endl;
  }
  return 0;
}


