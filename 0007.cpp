#include <iostream>
#define debt 100000

using namespace std;

int main(void){

  int n;
  cin >> n;

  int total = debt;
  for( int i = 0 ; i < n ; i++ ){
    total = total * 5 / 100 + total; 
    if( total % 1000 > 0 ){
      total = total / 1000 * 1000 + 1000;
    }
  }
  
  cout << total << endl;

  return 0;
}


