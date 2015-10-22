#include <iostream>

using namespace std;

int main(void){

  int t,n,s,f;
  while( cin >> t , t ){

    cin >> n;
    int time = 0;
    for( int i = 0 ; i < n ; i++ ){
      cin >> s >> f;
      time += ( f - s );
    }
    if( time >= t ) cout << "OK" << endl;
    else cout << t - time << endl;
  }
  return 0;
}


