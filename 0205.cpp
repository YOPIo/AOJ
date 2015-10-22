#include <iostream>

using namespace std;

int main(void){

  int j[5];
  bool R,S,P;


  while(cin >> j[0], j[0]){
    for( int i = 1 ; i < 5 ; i++ ){
      cin >> j[i];
    }
    R = S = P = false;
    for( int i = 0 ; i < 5 ; i++ ){
      if(j[i] == 1 ) R = true;
      if(j[i] == 2 ) S = true;
      if(j[i] == 3 ) P = true;
    }

    if( R && S && P )
      for( int i = 0 ; i < 5 ; i++ )
	cout << "3" << endl;
    else if( R && S && !P ) // パーなし
      for( int i = 0 ; i < 5 ; i++ ){
	switch(j[i]){
	case 1:
	  cout << "1" << endl;
	  break;
	case 2:
	  cout << "2" << endl;
	  break;
	}
      }
    else if( R && !S && P ) // チョキなし
      for( int i = 0 ; i < 5 ; i++ ){
	switch(j[i]){
	case 1:
	  cout << "2" << endl;
	  break;
	case 3:
	  cout << "1" << endl;
	  break;
	}
      }
    else if( !R && S && P ) // グーなし
      for( int i = 0 ; i < 5 ; i++ ){
	switch(j[i]){
	case 2:
	  cout << "1" << endl;
	  break;
	case 3:
	  cout << "2" << endl;
	  break;
	}
      }
    else if( (!R && !S && P) || (!R && S && !P ) || (R && !S && !P ) ){
      for( int i = 0 ; i < 5 ; i++ )
	cout << "3" << endl;
    }
  }
  return 0;
}


