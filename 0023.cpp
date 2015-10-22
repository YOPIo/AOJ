#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  double xa,ya,ra;
  double xb,yb,rb;

  int n;
  cin >> n;
  
  for( int i = 0 ; i < n ; i++ ){
    
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    
    double rx = xa - xb;
    double ry = ya - yb;
    double r = sqrt( pow( rx , 2 ) + pow( ry , 2 ) );
   
    if( ra > rb + r ) cout << "2" << endl; 
    else if(  rb > ra + r ) cout << "-2" << endl;
    else if( r <= ra + rb ) cout << "1" << endl;
    else cout << "0" << endl;
  }
  return 0;
}


