#include <iostream>

using namespace std;

int main(void){

  int total = 0, s;
  while(cin >> s){
    total += s;
  }
  int m = 0;
  while(total >= 60){
    m++;
    total -= 60;
  }
  cout << m << endl << total << endl;
  return 0;
}


