#include <iostream>
#include <cmath>
#include <cstdio>
#define PI 3.14159265358

using namespace std;

int main(void){

  int go,kakudo;
  char ten;
  double x,y;
  int R = 90;
  x = y = 0;
  while(1){
    cin >> go >> ten >> kakudo;
    if( go == 0 && kakudo == 0 )break;
    x += go * sin(R*PI/180);
    y += go * cos(R*PI/180);
    R -= kakudo;
  }
  printf("%d\n%d\n", (int)y, (int)x);  
  return 0;
}


