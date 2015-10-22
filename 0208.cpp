#include <iostream>

using namespace std;

int main(void){
  
  int num[] = {0,1,2,3,5,7,8,9};
  int n;
  long long a = 0;
  long long b = 1;
  
  while( cin >> n , n ){
    
    a = 0;
    b = 1;
    while(n){
      a += num[n % 8] * b;
      b *= 10;
      n /= 8;
    }
    cout << a << endl;
  }
  return 0;
}


