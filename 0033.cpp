#include <iostream>

using namespace std;

int main(void){

  int a,b,c,out;
  int n;
  cin >> n;
  while(n--){

    a = b = c = out = 0;

    for( int l = 10 ; l > 0 ; l-- ){
      cin >> a;
      if( b < a ){
	b = a;
      }
      else if( c < a ){
	c = a;
      }
      else out = a;
    }
    if( out == 0 )cout << "YES" << endl;
    else cout << "NO" << endl;
  }
 return 0;
}


