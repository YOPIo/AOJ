#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string s;

string int_to_string(int number){

  stringstream ss;
  ss << number;

  return ss.str();
}

string string_change(void){

  int S = s.size();
  string RS = "";
  for( int i = 0 ; i < S ; i++ ){
    int cnt = 0;
    for( int j = i ; s[j] == s[i] ; j++ ) cnt++;
    i += cnt - 1;
    RS += int_to_string(cnt);
    RS += s[i];
  }
  return RS;
}

int main(void){

  int n;
  while( cin >> n , n ){
    cin >> s;
    while(n--){
      s = string_change();
    } 
    cout << s << endl;
  }
  return 0;
}


