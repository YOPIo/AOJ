#include <iostream>

using namespace std;

int main(void){

  int total = 0, ten;
  for(int i = 0 ; i < 5 ; i++){
    cin >> ten;
    total += ten >= 40 ? ten : 40;
  }
  cout << total / 5 << endl;

  return 0;
}


