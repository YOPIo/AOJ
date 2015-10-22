#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

double heron( double a, double x, double l){
  double s = (a+x+l)/2;
  return sqrt(s*(s-a)*(s-x)*(s-l));//ヘロンの公式
}

int main(void){

  double a,x,l;
  while( cin >> a >> l >> x ){
    double z = ( x + l ) / 2;
    double S = heron(l,l,a) + 2 * heron(z,z,l);
    printf("%.10f\n",S);
  }


  return 0;
}


