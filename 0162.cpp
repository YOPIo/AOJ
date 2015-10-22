#include <iostream>
#include <cmath>

using namespace std;

int haming(int x){

  while(1){

    int flag = 0;

    if( x % 5 == 0 ){
      x /= 5;
      flag++;
    }
    if( x % 3 == 0 ){
      x /= 3;
      flag++;
    }
    if( x % 2 == 0 ){
      x /= 2;
      flag++;
    }

    if( x != 1 && flag == 0 ) return 0;
    if( x == 1 && flag > 0 ) return 1;

  }
}

int main(void){

  int m,n;

  while(1){

    cin >> m;
    if( m == 0 ) break;
    cin >> n;

    int h = 0;
    for( int i = m ; i <= n ; i++ ){
      if( i == 1 ) h++;
      else h +=  haming(i);
    }
    cout << h << endl;
  }
  return 0;
}


