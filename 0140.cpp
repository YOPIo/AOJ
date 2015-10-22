#include <iostream>

using namespace std;

int main(void){

  int n;
  cin >> n;

  while(n--){

    int from,too;
    cin >> from >> too;

    if( from < too ){
      for( int i = from ; i <= too ; i++ ){
	if( i == too ) cout << i << endl;
	else cout << i << " ";
      }
    }
    else if( ( 0 <= from && from <= 5 ) && ( 0 <= too && too <= 5 ) ){
      for( int i = from ; i >= too ; i-- ){
	if( i == too ) cout << i << endl;
	else cout << i << " ";
      }
    }

    else if( 6 <= from && from <= 9 ){

      for( int i = from ; i <= 9 ; i++ )
	cout << i << " ";

      for( int i = 5 ; i >= too ; i-- ){
	if( i == too ) cout << i << endl;
	else cout << i << " ";
      }

      if( 6 <= too && too <= 9 ){
	cout << "5 4 3 2 1 0 1 2 3 4 5 ";   
	for( int i = 6 ; i <= too ; i++ ){
	  if( i == too ) cout << i << endl;
	  else cout << i << " ";
	}
      }

    }
    
  }
  return 0;
}


