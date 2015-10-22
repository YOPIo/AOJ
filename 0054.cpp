#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  int a,b,n;
  while( cin >> a >> b >> n ){

    int s = 0;
    for( int i = 0 ; i < n ; i++ ){
     a = a % b;
     a *= 10; 
     s = s + a / b;
    }
    cout << s << endl;
  }
  return 0;
}


