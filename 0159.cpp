#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){

  double n,h,w,i;
  double BMI;

  while( cin >> n , n ){

    double risou = 9999999;
    int num = 9999999;

    for( int j = 0 ; j < n ; j++ ){
      cin >> i >> h >> w;

      BMI = w / pow( h/100 , 2 );

      if( abs(22 - BMI) <= abs(22 - risou) ){
	if( abs(22 - BMI) == abs(22 - risou) ){
	  if( i < num ) num = i;
	  continue;
	}
	risou = BMI;
	num = i;
      }
    }
    cout << num << endl;

  }
  return 0;
}


