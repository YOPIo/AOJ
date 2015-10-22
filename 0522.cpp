#include <iostream>
#include <string>

using namespace std;

int main(void){

  string s;
  int JOI,IOI;

  while( cin >> s ){
    
    JOI = IOI = 0;

    for( int i = 0 ; i < s.size() - 2 ; i++ ){
      if( s.find("JOI" , i ) == i ) JOI++;
      if( s.find("IOI" , i ) == i ) IOI++;
    }
    cout << JOI << endl;
    cout << IOI << endl;

  }
  return 0;
}


