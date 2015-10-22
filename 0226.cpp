#include <iostream>
#include <string>

using namespace std;

int main(void){

  string taro,hanako;
  while( cin >> taro >> hanako ){
    if( taro == hanako && taro == "0" )break;

    int hit = 0;
    int blow = 0;
    for( int i = 0 ; i < 4 ; i++ ){
      for( int j = 0 ; j < 4 ; j++ ){
	if( i != j && taro[i] == hanako[j] ){
	  hit++;
	}
	if( i == j && taro[i] == hanako[j] ){
	  blow++;
	}
      }
    }
    cout << blow << " " << hit << endl;

  }
  return 0;
}


