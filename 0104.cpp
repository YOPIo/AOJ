#include <iostream>

using namespace std;

char a[100][100];
int h,w;

int check( int x , int y ){

  if( a[x][y] == 'x' ){ // すでに訪れてるので終了
    cout << "LOOP" << endl;
    return 0;
  }
  else if( a[x][y] == '.' ){ // .だとループするこはないので終了
    cout << y << " " << x<< endl;
    return 0;
  } 

  else if( a[x][y] == '>' ){
    a[x][y] = 'x'; // 訪れたところにはxを入れる
    check( x , y + 1);
  }
  else if( a[x][y] == '<' ){
    a[x][y] = 'x'; // 訪れたところにはxを入れる
    check( x , y - 1 );
  }
  else if( a[x][y] == '^' ){
    a[x][y] = 'x'; // 訪れたところにはxを入れる
    check( x - 1, y );
  }
  else if( a[x][y] == 'v' ){
    a[x][y] = 'x'; // 訪れたところにはxを入れる
    check( x + 1 , y );
  }

}


int main(void){

  while( cin >> h >> w , h || w ){

    for( int i = 0 ; i < h ; i++ ){
      for( int j = 0 ; j < w ; j++ ){
	cin >> a[i][j]; // 読み込み
      }
    }

    check( 0 , 0 );

    // for( int i = 0 ; i < h ; i++ ){
    // for( int j = 0 ; j < w ; j++ ){
    //	cout << a[i][j];
    // }
    // cout << endl;
    //}

  }
  return 0;
}


