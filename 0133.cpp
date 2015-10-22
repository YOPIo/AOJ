#include <iostream>

using namespace std;

int main(void){

  char r[8][8];

    for( int i = 0 ; i < 8 ; i++ ){
      for( int j = 0 ; j < 8 ; j++ ){
	cin >> r[i][j];
      }
    }

       cout << "90" << endl;
    for( int i = 0 ; i < 8 ; i++ ){
      for( int j = 7 ; j >= 0 ; j-- ){
	cout << r[j][i];
      }
      cout << endl;
    }

    cout << "180" << endl;
    for( int i = 7 ; i >= 0 ; i-- ){
      for( int j = 7 ; j >= 0 ; j-- ){
	cout << r[i][j];
      }
      cout << endl;
    }
 cout << "270" << endl;
    for( int i = 7 ; i >= 0 ; i-- ){
      for( int j = 0 ; j < 8 ; j++ ){
	cout << r[j][i];
      }
      cout << endl;
    }

  return 0;
}


