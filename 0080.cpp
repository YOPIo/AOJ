#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){

  int q;
  while( cin >> q ){
    if( q == -1 )break;
    if( q == 1 ){
      printf("1.000000");
      cout << endl;
      continue;
    }
    double x =  q / 2;
    while(1){
      if( abs(x*x*x - q) < 0.00001*q )break;
      x = x - ( x*x*x - q ) / ( 3*x*x );
    }
    printf("%.6f", x);
    cout << endl;
  }
  return 0;
}


