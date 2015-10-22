#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int mountain[10];

  for( int i = 0 ; i < 10 ; i++ ){
    cin >> mountain[i];
  }

  sort( mountain , mountain + 10 );

  cout << mountain[9] << endl << mountain[8] << endl <<mountain[7] << endl;

  return 0;
}


