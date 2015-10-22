#include <iostream>

using namespace std;

int BMI( double w , double h ){

  double bmi = w / (h * h);

  if( bmi >= 25 )return 1;
  else return 0;

}


int main(void){

  int stu;
  int out[10000];
  double w,h;
  char ten;
  int i = 0;

  while( cin >> stu >> ten >> w >> ten >> h ){

    switch( BMI(w,h) ){
    case 1:
      out[i++] = stu;
      break;
    case 0:
      continue;
    }
  }
  for( int j = 0 ; j < i ; j++ ) cout << out[j] << endl;
  return 0;
}


