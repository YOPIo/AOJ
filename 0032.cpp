#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  double l1,l2,taikaku;
  int cnt1 = 0;
  int cnt2 = 0;
  char ten;
  char tenten;

  while( cin >> l1 >> ten >> l2 >> tenten >> taikaku ){
    if( sqrt( pow( l1 , 2 ) + pow( l2 , 2 ) ) == taikaku ){
      cnt1++;
    }
    else if( l1 == l2 ){
      cnt2++;
    }
  }
  cout << cnt1 << endl << cnt2 << endl;
  return 0;
}


