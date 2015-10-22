#include <iostream>

using namespace std;

int conpute( int y,int m, int d ){

  int day = 0;

  for( int i = 1 ; i < y ; i++ ){
    day += 365;
    if( i % 100 == 0 ){
      if( i % 400 == 0 ) day++;
    }
    else if( i % 4 == 0 ) day++;
  }
  
for( int i = 1 ; i <  m ; i++ ){

    switch(i){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      day += 31;
      break;
    case 2:
      day += 28;
      if( y % 100 == 0 ){
	if( y % 400 == 0 ) day++;
      }
      else if( y % 4 == 0 ) day++;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      day += 30;
      break;
    }
 }
 day += d;
 return day;
}
int main(void){
  
  int y1,y2;
  int m1,m2;
  int d1,d2;
  
  while( cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2 ){
    if( y1 == m1 && m1 == d1 && d1 == y2 && y2 == m2 && m2 == d2 && d2 == -1 ){
      break;
    }
    int ans = 0;
    ans = conpute( y2, m2, d2 ) - conpute( y1, m1, d1 );
    cout << ans << endl;
  }
  return 0;
}


