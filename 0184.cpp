#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int aizu[7] = {0};

    int year;
    for( int i = 0 ; i < n ; i++ ){
      cin >> year; 
      if( year > 60 ) year = 60;
      aizu[year/10]++;
    }

    for( int i = 0 ; i < 7 ; i++ ){
      cout << aizu[i] << endl;
    }
  }
  return 0;
}


