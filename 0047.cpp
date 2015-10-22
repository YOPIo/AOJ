
//今、ボールがどこにあるかだけ考えれば出来る

#include <iostream>

using namespace std;

int main(void){

  char p1,p2;
  char ten;
  char ans = 'A';

  while( cin >> p1 >> ten >> p2 ){
    if( p1 == ans ){
      ans = p2;
    }
    else if( p2 == ans ){
      ans = p1;
    }
  }
  cout << ans << endl;
  return 0;
}


