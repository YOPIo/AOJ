#include <iostream>

using namespace std;

int main(void){

  char c[15];
  int before;
  int after;

  for( int i = 0 ; i < 9 ; i++ ){
    cin >> c >> before >> after;
    cout << c << " " << before + after << " " << before*200 + after*300 << endl;
  }

  return 0;
}


