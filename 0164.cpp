#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int o[32];
    for( int i = 0 ; i < n ; i++ ){
      cin >> o[i];
    }

    int num = 32;
    int I = 0;

    while(num){
      num -= (num - 1) % 5;
      cout << num << endl;
      num -= o[(I++) % n];
      if(num < 0) num = 0;
      cout << num << endl;
    }
  }
  return 0;
}


