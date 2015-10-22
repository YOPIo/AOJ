#include<iostream>
#include<string>

using namespace std;

int main(void){
  
  string s;
  
  while(1){

    getline( cin, s );
    if ( s == "END OF INPUT" ) break;
    
    int cnt = 0;
    for ( int i = 0; i < s.size(); i++ ){
      if ( s[i] == ' ' ){
	cout << cnt;
	cnt = 0;
      }else cnt++;
    }
    cout << cnt << endl; 
  }
  return 0;
}


