#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

  int n;
  int triangle[3];

  cin >> n;

  while(n--){

  for( int i = 0 ; i < 3 ; i++ ){
    cin >> triangle[i]; 
  }

  sort( triangle , triangle + 3 );

  if( triangle[2] * triangle[2] == triangle[1] * triangle[1] + triangle[0] * triangle[0] ) cout << "YES" << endl;
  else cout << "NO" << endl;
  }
  return 0;
}


