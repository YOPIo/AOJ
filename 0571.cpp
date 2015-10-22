#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;

int compute(int i){

  int cnt = 1;

  if( i+1 >= s.size() )return cnt;
  if( s[i+1] == 'O'){
    cnt += compute(i+1); 
  }

  return cnt;
}


int main(void){

  while( cin >> s ){

    int lev = 0;
    int a = 0,c = 0,C = 0;
    int temp_O,temp_I;
    int ans = 0;
    for( int i = 0 ; i < s.size() ; i++ ){
      if( s[i] == 'O' ){
	a = compute(i);
	//	cout <<"---" << a << "---" << endl;
	temp_O = a;
	temp_I = a;
	c = C = a;

      }
      if( a > 0 ){
	int j = 1;
	while(temp_O--){
	  if( s[i-j] == 'J'){
	    if(i-j < 0){
	      i += a;
	      continue;
	    }
	    c--;
	    //cout << "J" ;
	    j++;
	  }
	}
	j = C;
	while(temp_I--){
	  if( s[i+j] == 'I'){
	    if(i+j >= s.size() ){
	      continue;
	      i += a;
	    }
	    C--;
	    j++;
	    //cout << "O";
	  }
	}
	if( c == 0 && C == c ){
	  // cout << "ok" << endl;
	  ans = max( ans , a );
	} 
      }
      i += a;
      a = 0;
    }
  cout << ans << endl;
  }
  return 0;
}


