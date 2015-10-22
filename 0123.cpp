#include <iostream>

using namespace std;

int main(void){

  double m500,m1000;

  while( cin >> m500 >> m1000 ){

    if( m500 < 35.5 && m1000 < 71 ) cout << "AAA" << endl;
    else if( m500 < 37.5 && m1000 < 77 ) cout << "AA" << endl;
    else if( m500 < 40 && m1000 < 83 ) cout << "A" << endl;
    else if( m500 < 43 && m1000 < 89 ) cout << "B" << endl;
    else if( m500 < 50 && m1000 < 105 ) cout << "C" << endl;
    else if( m500 < 55 && m1000 < 116 ) cout << "D" << endl;
    else if( m500 < 70 && m1000 < 148 ) cout << "E" << endl;
    else cout << "NA" << endl;

  }
  return 0;
}


