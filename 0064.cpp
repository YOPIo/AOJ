#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

char c;
string s;
int ans,size,a,n;

int get_int(){

  size = s.size();
  a = 1;
  n = 0;
  for( int i = size - 1 ; i >= 0 ; i-- ){
    n += ( s[i] - '0' ) * a;
    a *= 10;
  }
  return n;
}

int main(void){

  s = "";
  ans = 0;

  while( scanf("%c",&c) != EOF ){
    if( '0' <= c && c <= '9' ){
      s += c;
    }
    else {
      ans += get_int();
      s = "";
    }
  }
  cout << ans << endl;
  return 0;
}


