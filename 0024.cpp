#include <iostream>

using namespace std;

int main(void){

  double v;
  while( cin >> v ){

    double t = v / 9.8;
    double y = 4.9*t*t;

    for( int N = 1 ; N <= 1000 ; N++ ){
      if( 5 * N - 5 >= y ){
	cout << N << endl;
	break;
      }
    }

  }
  return 0;
}


