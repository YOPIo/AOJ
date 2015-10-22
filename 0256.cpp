#include <iostream>

using namespace std;

int main(void){

  int a[10];
  int total = 0;
  for( int i = 0 ; i < 10 ; i++ ){
    cin >>a[i];
    total += a[i];
  }
  cout << total << endl;
  return 0;
}


