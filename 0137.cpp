#include <iostream>
#include <cmath>

using namespace std;

int main(void){

  int x = 1;

  int n;
  cin >> n;
  while( n-- ){
    
    double num;
    cin >> num;
    
    cout << "Case " << x++ << ":" <<  endl;
    for( int i = 0 ; i < 10 ; i++ ){
      
      num = pow( num , 2 );
      
      int N[4];
      N[0] = (int)num % 1000;
      N[1] = (int)num % 10000;
      N[2] = (int)num % 100000;
      N[3] = (int)num % 1000000;    

      //cout << N[0] << endl;
      //cout << N[1] << endl;
      //cout << N[2] << endl;
      //cout << N[3] << endl;

      N[0] /= 100;
      N[1] /= 1000;
      N[2] /= 10000;
      N[3] /= 100000;

      //cout << N[0] << endl;
      //cout << N[1] << endl;
      //cout << N[2] << endl;
      //cout << N[3] << endl;

      int ans = 0;
      ans = N[3]*1000 + N[2]*100 + N[1]*10 + N[0];

      cout << ans << endl;

      num = ans;      

    }
  }
  return 0;
}


