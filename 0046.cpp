#include <iostream>
#include <cstdio>
using namespace std;

int main(void){

  double mountain;
  double Max = 0;
  double Min = 999999;
  while( cin >> mountain ){
    Max = max( mountain , Max );
    Min = min( mountain , Min );
  }
  printf("%.1f",Max - Min);
  return 0;
}


