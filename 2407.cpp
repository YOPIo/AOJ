#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  string s;
  cin >> s;
  if( s[0] == s[s.size() - 1] && s[0] == 'x' ) cout << "x" << endl;
  else cout << "o" << endl;

}


