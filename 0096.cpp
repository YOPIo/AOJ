#include <iostream>

using namespace std;

int c[2001] = {0};
int d[4001] = {0};

void compute(void){

  for( int i = 0 ; i <= 1000 ; i++ ){
    for( int j = 0 ; j <= 1000 ; j++ ){
      c[i+j]++;  // a + b = c の組み合わせがいくるあるか
    }
  }
  for( int i = 0 ; i <= 2000 ; i++ ){
    for( int j = 0 ; j <= 2000 ; j++ ){
      d[i+j] += c[i]*c[j];
    }
  }
}

int main(void){

  compute();

  int n;
  while( cin >> n ){
    cout << d[n] << endl;
  }
  return 0;
}


