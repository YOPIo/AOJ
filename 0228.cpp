#include <iostream>
#include <string>

using namespace std;

int main(void){

  int n;
  string bit[10];
  bit[0] = "0111111";
  bit[1] = "0000110";
  bit[2] = "1011011";
  bit[3] = "1001111";
  bit[4] = "1100110";
  bit[5] = "1101101";
  bit[6] = "1111101";
  bit[7] = "0100111";
  bit[8] = "1111111";
  bit[9] = "1101111";

  while( cin >> n , n >= 0 ){

    int A,B;    
    cin >> A;
    cout << bit[A] << endl;
    n--;

    while(n--){
      cin >> B;
      for( int i = 0 ; i < 7 ; i++ ){
	if( bit[A][i] == bit[B][i] ){
	  cout << "0";
	}
	else cout << "1";
      }
      cout << endl;
      A = B;
    }
  }
  return 0;
}


