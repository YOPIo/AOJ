#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int a,b,c;

  while( cin >> a >> b ){

    if( a < b ) swap(a,b);

    while(1){
    c = a % b;
    a = b;
    b = c;
    if( b == 0 )break;
    }
    cout << a << endl;
  }
  return 0;
}


