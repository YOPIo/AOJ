#include <iostream>
#include <string>

using namespace std;
 
int main(void){
  
  int i,j,n,a;
  string s,ans;
  cin >> n;
  
  for(i = 0 ; i < n ; i++ ){  
    
    cin >> s;
    ans = "NA";
    
    if( s[0] == '>'){
      if( s[1] == '\''){
	a = 2;
	int cnt1 = 0,cnt2 = 0;
	if( s[a] == '='){
	  while( s[a] == '='){
	    a++;
	    cnt1++;
	  }
	  if( s[a] == '#' ){
	    a++;
	    if( s[a] == '='){
	      while( s[a] == '='){
		cnt2++;
		a++;
	      }
	      if( s[a] == '~' && a + 1 == s.size() && cnt1 == cnt2) ans = "A";
	    }
	  }
	}
      }
      else if( s[1] == '^'){
	a = 2;
	if( s[a] == 'Q' && s[a + 1] == '='){
	  while( s[a] == 'Q' && s[a + 1] == '=') a += 2;
	  if( s[a] == '~' && s[a + 1] == '~' && a + 2 == s.size()) ans = "B";
	}
      }
    }
    cout << ans << endl;
  }
  return 0;
}


