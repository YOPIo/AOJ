

#include <iostream>

using namespace std;

int main(void){

  double l[10];
  double v1,v2;
  char ten;

  while( cin >> l[0] ){

    for( int i = 1 ; i < 10 ; i++ ){
      cin >> ten >> l[i];
    }
    cin >> ten >> v1 >> ten >> v2;

    double way = 0;
    for( int i = 0 ; i < 10 ; i++ ){
      way += l[i];
    } 

    way = way * ( v1 / ( v1 + v2 ) );

    double way2 = 0;
    int ans;
    for( int i = 0 ; i < 10 ; i++ ){
      way2 += l[i];
      if( way <= way2 ){
	ans = i + 1;
	break;
      }
    }
    cout << ans << endl;

  }
  return 0;
}


