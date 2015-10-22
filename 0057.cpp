#include <iostream>

using namespace std;

int area(int n){
  if( n == 1 ) return 2;
  return n + area( n - 1 );
}

int main(void){

  int n;
  while( cin >> n ){
    cout << area(n) << endl;
  }
  return 0;
}


