#include <iostream>

using namespace std;

int main(void){

  long long a;
  long long b;
  long long result;
  long long temp1;
  long long temp2;

  while( cin >> a >> b ){

    temp1 = a;
    temp2 = b;

    while(1){
      result = a % b;
      if( result == 0 )break;
      else a = b;  b = result;
    }
    cout << b << " " << temp1 / b * temp2 << endl;
  }
  return 0;
} 


