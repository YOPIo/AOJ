#include <iostream>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){
    n /= 4;
    int total = 0;
    int in;
    while(n--){
      cin >> in;
      total += in;
    }
    cout << total << endl;
  }
  return 0;
}


