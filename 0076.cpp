
//動径の長さは√nで表される
//ラジアンを加えていく

#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  int n;
  while(1){ 
    cin >> n;
    if( n == -1 )break;

    double rad = 0;
    for( int i = 1 ; i < n ; i++ ){
      rad += atan( 1 / sqrt(i) );
    }
    cout << sqrt(n)*cos(rad) << endl << sqrt(n)*sin(rad) << endl;
  }
  return 0;
}


