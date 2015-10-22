#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef pair<int , string> t;

int main(void){

  int n,num;
  string s;
  map < t , int > m;

  cin >> n;
  for( int i = 0 ; i < n ; i++ ){
    cin >> s >> num;
    m[ t( s.size() , s ) ] += num;
  }

  map<t,int>::iterator it;
  for( it = m.begin() ; it != m.end() ; it++ ){
    cout << it->first.second <<  " " << it->second << endl;
  }

  return 0;
}


