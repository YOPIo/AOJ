#include <iostream>

using namespace std;

long long n,a,total;

int main(void){

  total = 0;
  cin >> n;

  for( int i = 0 ; i < n ; i++ ){
    cin >> a;
    total += a;
  }
  cout << (int)(total / n) << endl;
  return 0;
} 


