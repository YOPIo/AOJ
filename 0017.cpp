#include <iostream>
#include <string>

using namespace std;

string findtest;

int main(void){
  
  while( getline( cin , findtest ) ){
    while( findtest.find("the") == findtest.npos && findtest.find("that") == findtest.npos && findtest.find("this") == findtest.npos ) {
      // ここでthe.that.thisが見つかるまで文字を１つずつ動かす
      //１つでも見つかればwhileを抜け出して出力
      for( int i = 0 ; i < findtest.size() ; i++ ){
	//このforで全ての文字を１つずらす
	if( 'a' <= findtest[i] && findtest[i] <= 'y' )findtest[i]++;
	else if( findtest[i] == 'z' ) findtest[i] = 'a';
      }
    }
    cout << findtest << endl;
  }
  return 0;
}


