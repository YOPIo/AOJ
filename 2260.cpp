#include <iostream>
#include <algorithm>
#include <string.h>

char c[128];
std::string s;

void set(void){

  using namespace std;

  c['('] = ')';
  c[')'] = '(';
  c['i'] = 'i';
  c['w'] = 'w';

}

int main(void){

  using namespace std;

  set();
  
  cin >> s;

  int S = s.size();
  int ans = 0;
  
  if( S % 2 == 1 )
    if( s[S/2] != 'i' && s[S/2] != 'w' ) ans++;
  
  for( int i = 0 ; i < S/2 ; i++ )
    if( s[i] != c[s[S - 1 - i]] ) ans++;
 
  cout << ans << endl; 
  return 0;
}


