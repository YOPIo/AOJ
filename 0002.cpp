#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int a,b;

  while( cin >> a >> b ){
    a = log10 ( a + b );
    cout << a + 1  << endl;
  }
  return 0;
}


