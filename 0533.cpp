#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int waseda[10];
  int keo[10];

  for( int i = 0 ; i < 10 ; i++ ){
    cin >> waseda[i];
  }
  for( int i = 0 ; i < 10 ; i++ ){
    cin >> keo[i];
  }

  sort( waseda , waseda + 10 );
  sort( keo , keo + 10);

  cout << waseda[9] + waseda[8] + waseda[7] << " " << keo[9] + keo[8] + keo[7] << endl;
}


