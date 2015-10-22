#include <iostream>

using namespace std;

int n,a,b,sum_a,sum_b;

int main(void){
  
  while( cin >> n , n ){
    
    sum_a = sum_b = 0;
    for( int i = 0 ; i < n ; i++ ){
      cin >> a >> b;
      if( a > b ) sum_a += a + b;
      if( a < b ) sum_b += a + b;
      if( a == b ){
	sum_a += a;
	sum_b += b;
      }
    }
    cout << sum_a << " " << sum_b << endl;    
  }
  return 0;
}


