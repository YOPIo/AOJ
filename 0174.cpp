#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  string s;
  while( cin >> s , s[0] != '0' ){

    int a = 0 ,b = 0;
    char ans;
    for( int i = 1 ; i < s.size() ; i++ ){
      if( s[i] == 'A' ) a++;
      if( s[i] == 'B' ) b++;
    }
    if( a > b ) a++;
    else b++;
    cout << a << " " << b <<  endl;
  }
  return 0;
}


