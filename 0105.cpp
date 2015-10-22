#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(void){

  map <string , vector<int > > m;
  string s;
  int n;

  while( cin >> s >> n ){
    m[s].push_back(n);
  }

  map<string , vector<int> >::iterator it;
  for( it = m.begin() ; it != m.end() ; it++ ){
    cout << it->first << endl;
    sort(it -> second.begin() , it -> second.end() );
    int i;
    for( i = 0 ; i < it -> second.size() - 1 ; i++ ){
      cout << it -> second[i] << " ";
    }
    cout << it -> second[i] << endl;
  }
  return 0;
}


