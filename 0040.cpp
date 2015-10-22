
//アフィン暗号のプログラム

#include <iostream>
#include <string>

using namespace std;

string henkan( string s ){
  string t;
  for( int i = 0 ; ; i++ ){
    for( int j = 0 ; j < 26 ; j++ ){
      t = s;
      for( int k = 0 ; k < t.size() ; k++ ){
	if( 'a' <= t[k] && t[k] <= 'z'){
	  t[k] = ( i * ( t[k] - 'a' ) + j ) % 26 + 'a';
       	}
      }
      if( t.find("that") != t.npos || t.find("this") != t.npos ){
	return t;
      }
    }
  }
}

int main(void){
  int n;
  cin >> n;
  cin.get();
  while(n--){
    string s;
    getline( cin, s );
    cout << henkan(s) << endl;
  }
  return 0;
}


