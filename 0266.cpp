#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;
int size;
int r[7][7];
int now;
int flag;

int main(void){
  
  for( int i = 0 ; i < 7 ; i++ ){
    for( int j = 0 ; j < 7 ; j++ ){
      r[i][j] = -1;
    }
  }
  r[1][2] = r[4][2] = r[6][4] = r[3][5] = r[5][6] = 0;
  r[1][4] = r[2][3] = r[6][2] = r[3][6] = r[5][4] = 1;
  
  // A = 1, B = 6, X = 2, Y = 4, W = 5, Z = 3
  
  while( cin >> s , s[0] != '#' ){
    
    int now = 1;
    size = s.size();
    
    for( int i = 0 ; i < size ; i++ ){
      
      int S = s[i] - '0';
      flag = 0;
      for( int j = 1 ; j < 7 ; j++ ){
	
	if( r[now][j] == S ){
	  now = j;
	  // cout << j << endl;	  
	  break;
	}
	else flag++;
      }
      if( flag == 6 ) goto end;
    }
    if( now == 6 ) cout << "Yes" << endl;
    else {
    end:
      cout << "No" << endl;
    }
  }
  return 0;
}


