#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main(void){

  int n;
  cin >> n;

  while(n--){

    double x1,x2,x3;
    double y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double A1 = 2*(x2 - x1);
    double B1 = 2*(y2 - y1);
    double C1 = pow( x1 , 2 ) - pow( x2 , 2 ) + pow( y1 , 2 ) - pow( y2 , 2);
    double A2 = 2*(x3 - x1);
    double B2 = 2*(y3 - y1);
    double C2 = pow( x1 , 2 ) - pow( x3 , 2 ) + pow( y1 , 2 ) - pow( y3 , 2);
    double x = ( B1*C2 - B2*C1 ) / ( A1*B2 - A2*B1 );
    double y = ( C1*A2 - C2*A1 ) / ( A1*B2 - A2*B1 );
  
  double R = pow( (x - x1) , 2 ) + pow( (y - y1 ) , 2 );
  printf("%.3f %.3f %.3f", x, y, sqrt(R));
  cout << endl;
  }
  return 0;
}


