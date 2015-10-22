#include <iostream>

using namespace std;

int main(void){

  int n,cnt;
  int s[12];
  int copys[12];
  while( cin >> n , n ){

    for( int i = 0 ; i < n ; i++ ){
      cin >> s[i];
      copys[i] = s[i];
    }

    int ans = 0;
    while(1){

      for( int i = 0 ; i < n ; i++ ){
	cnt = 0;
	for( int j = 0 ; j < n ; j++ ){
	  // cout << "s[i] = " << s[i] << " ";
	  //cout << "s[j] = " << s[j] << " " << endl;;
	  if( s[i] == s[j] ){
	    //cout << "cnt" << endl;
	    cnt++;
	  }
	}
	copys[i] = cnt;
	cnt = 0;
      }

      cnt = 0;
      for( int i = 0 ; i < n ; i++ ){
	if( copys[i] == s[i] ){
	  cnt++;
	}
	s[i] = copys[i];
      }   
      if( cnt == n ) break;
      ans++;
    }

    cout << ans << endl;
    for( int i = 0 ; i < n - 1 ; i++ )
      cout << s[i] << " ";
    cout << s[n - 1] << endl;
  }
  return 0;
}


