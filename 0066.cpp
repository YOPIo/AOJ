#include <iostream>

using namespace std;

int main(void){

  char c[10];
  c[0] = '?'; 

  while( cin >> c[1] >> c[2] >> c[3] >> c[4] >> c[5] >> c[6] >> c[7] >> c[8] >> c[9] ){
 
    char m = 'd';
    if( c[1] == c[2] && c[2] == c[3] && c[3] != 's' ) m = c[1];
    else if( c[4] == c[5] && c[5] == c[6] && c[6] != 's' ) m = c[4];
    else if( c[7] == c[8] && c[8] == c[9] && c[9] != 's' ) m = c[7];
    else if( c[1] == c[4] && c[4] == c[7] && c[7] != 's' ) m = c[1];
    else if( c[2] == c[5] && c[5] == c[8] && c[8] != 's' ) m = c[2];
    else if( c[3] == c[6] && c[6] == c[9] && c[9] != 's' ) m = c[3];
    else if( c[1] == c[5] && c[5] == c[9] && c[9] != 's' ) m = c[1];
    else if( c[3] == c[5] && c[5] == c[7] && c[7] != 's' ) m = c[3];  
    cout << m << endl;
  }
  return 0;
}


