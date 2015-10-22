#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string island[12];

void dfs( int i , int j ){

  island[i][j] = '0';

  if( i - 1 >= 0 && island[i-1][j] == '1' ){
    dfs( i - 1 , j );
  }
  if( j - 1 >= 0 && island[i][j-1] == '1'){
    dfs( i , j - 1 );
  }
  if( i + 1 < 12 && island[i+1][j] == '1'){
    dfs( i + 1 , j );
  }
  if( j + 1 < 12 && island[i][j+1] == '1'){
    dfs( i , j + 1 );
  }
}

int main(void){

  while(1){
    
    for( int i = 0 ; i < 12 ; i++ ){
      if(cin >> island[i]);
      else return 0;
    }

    int cnt = 0;
    for( int i = 0 ; i < 12 ; i++ ){
      for( int j = 0 ; j < 12 ; j++ ){
	if( island[i][j] == '1' ){
	  cnt++;
	  dfs( i , j );
	}
      } 
    }
    cout << cnt << endl;
  }
  return 0;
}


