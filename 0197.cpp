#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int x,y;

  while( cin >> x >> y , x || y ){

    int count = 0;
    while(y){
      if( x < y ) swap( x, y );
      int s = x % y;   
      x = y;
      y = s;
      count++;
    }
    cout << x << " " << count << endl;
  }
  return 0;
}


