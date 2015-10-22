#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int sankaku,eikaku,tyokkaku,donkaku;
int hen[3];
bool musi;

int main(void){

  sankaku = eikaku = tyokkaku = donkaku = 0;
  musi = false;

  while( cin >> hen[0] >> hen[1] >> hen[2] ){

    if( !musi ){

      sort( hen , hen + 3 );

      if( hen[2] >= hen[0] +  hen[1] ){
	musi = true;
	continue;
      }
      sankaku++;

      for( int i = 0 ; i < 3 ; i++ )
	hen[i] = pow( (double)hen[i] , 2 );

      if( hen[2] == hen[0] + hen[1] ) tyokkaku++;
      if( hen[2] < hen[0] + hen[1] ) eikaku++;
      if( hen[2] > hen[0] + hen[1] ) donkaku++;
      
      
    }
  }
  cout << sankaku << " " << tyokkaku << " " << eikaku << " " << donkaku << endl;
  return 0;
}


