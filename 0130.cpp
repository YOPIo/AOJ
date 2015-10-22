#include <iostream>
#include <string>

using namespace std;

int main(void){

  int n;
  cin >> n;

  while(n--){

    string s;
    string ans;

    cin >> s;
    ans = s[0];

    for( int i = 1 ; i < s.size() ; i++ ){

      if( 'a' <= s[i] && s[i] <= 'z' ){

	if( s[i - 1] == '>' ){
	  for( int j = 0 ; j < ans.size() ; j++ ){
	    if( s[i] == ans[j] ) goto back;
	  }
	  ans = ans + s[i];
	}

	else if( s[i - 1] == '-' ){
	  for( int j = 0 ; j < ans.size() ; j++ ){
	    if( s[i] == ans[j] ) goto back;
	  }
	  ans = s[i] + ans;
	}
      }
    back:;
    }
    cout << ans << endl;
  }
  return 0;
}


