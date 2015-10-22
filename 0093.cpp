#include <iostream>

using namespace std;

int main(void){

  int a,b;
  bool f = false;
  while( cin >> a >> b && a && b ){

    if(f) cout << endl;
    else f = true;

    bool flag = false;
    for( int i = a ; i <= b ; i++ ){
      if( i % 4 == 0 ){
	if( i % 400 == 0 ) cout << i << endl;
	else if( i % 100 == 0 ) continue;
	else cout << i << endl;
	flag = true;
      }
    }
    if(flag == false ) cout << "NA" << endl;
  }
  return 0;
}


