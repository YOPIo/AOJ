
//　小文字を大文字に直すプログラム
//　isalphaはアルファベットならtrueを返す関数
// toupperは小文字を大文字にして返す関数
// tolowerは大文字を小文字にして返す関数

#include <iostream>
#include <string>

using namespace std;

int main(void){

  string s;
  getline( cin , s );

  for( int i = 0 ; i < s.size() ; i++ ){
    if( isalpha( s[i]) ){
      s[i] = toupper( s[i] );  
    }
  }
  cout << s << endl;

  return 0;
}


