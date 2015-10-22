#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){
    
    int x,y,h;
    int w,W = 0;
    int s;
    int total = 0;
    for( int i = 0 ; i < n ; i++ ){
      cin >> x >> y >> h >> w;
      s = x + y + h;
      
      if( s <= 60 && w <= 2 ){
	total += 600;
      }
      else if( s <= 80 && w <= 5 ){
	total += 800;
      }
      else if( s <= 100 && w <= 10 ){
	total += 1000;
      }
      else if( s <= 120 && w <= 15 ){
	total += 1200;
      }
      else if( s <= 140 && w <= 20 ){
	total += 1400;
      }
      else if( s <= 160 && w <= 25 ){
	total += 1600;
      }
      else total = total;
      
    }
    cout << total << endl; 
  }
  return 0;
}


