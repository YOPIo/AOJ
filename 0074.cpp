#include <iostream>
#include <cstdio>

using namespace std;

void compute(int S){

  int h = 0;
  int m = 0;
  int s = 0;

  while(1){
    if( S < 3600 )break;
    S -= 3600;
    h++;
  }
  while(1){
    if( S < 60 )break;
      S -= 60;
      m++;
  }
  printf("%02d:%02d:%02d", h, m, S);
  cout << endl;

}


int main(void){

  int h,m,s;
  while( cin >> h >> m >> s ){
    if( h < 0 && m < 0 && s < 0 )break;
    int se;
    se += s;
    se += m * 60;
    se += h * 60 * 60;
    se = 7200 - se;
    int SE = se * 3;
    compute(se);
    compute(SE);
    se = SE = 0;
  }
  return 0;
}


