#include <iostream>

using namespace std;

int main(void){

  double xa,xb,xc,xd;
  double ya,yb,yc,yd;

  while( cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd ){

    if( yb < yc || xb < xc || xd < xa || yd < ya ){
      cout << "NO" << endl;
      continue;
    }
    else cout << "YES" << endl;
  }
  return 0;
}


