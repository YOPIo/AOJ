#include <iostream>

using namespace std;

int main(void){

  int la = 0,ra = 0;
  int lb = 0,rb = 0;
  int lc = 0,rc = 0;
  int ld = 0,rd = 0;

  double l,r;

  while( cin >> l >> r ){

    if( l < 0.2 ) ld++;
    else if( 0.2 <= l && l < 0.6 ) lc++;
    else if( 0.6 <= l && l < 1.1 ) lb++;
    else la++;

    if( r < 0.2 ) rd++;
    else if( 0.2 <= r && r < 0.6 ) rc++;
    else if( 0.6 <= r && r < 1.1 ) rb++;
    else ra++;

  }

  cout << la << " " << ra << endl;
  cout << lb << " " << rb << endl;
  cout << lc << " " << rc << endl;
  cout << ld << " " << rd << endl;

  return 0;
}


