#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  int w[10];
  for( int i = 0 ; i < 10 ; i++ ){
    w[i] = pow( (double)2 , i );
  }

  int thing;
 b:
  while( cin >> thing ){

    int h[10];
    int j = 0;
    int cnt = 0;

    for( int i = 9 ; i >= 0 ; i-- ){
      thing -= w[i];
      if( thing < 0 ){
	thing += w[i];
      }
      else {
	h[j++] = i;
	cnt++;
      }
      if( thing == 0 ){
	for( int i = cnt - 1 ; i >= 0 ; i-- ){
	  if(i) {
	    cout << w[h[i]] << " ";
	  }
	  else{
	    cout << w[h[i]] << endl;
	    goto b;
	  }
	}
      }
      }
  end:;
  }
  return 0;
}


