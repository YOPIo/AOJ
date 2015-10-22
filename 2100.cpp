#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int N,a,b;
  cin >> N;
  while(N--){
    int n;
    cin >> n; 
    int mou,now;
    int MAX = 0;
    int MIN = 0;
    cin >> now;
    for( int i = 1 ; i < n ; i++ ){
      cin >> mou;
      a = mou - now;
      if( a > 0 ){
	MAX = max( a , MAX );
      }else {
	MIN = max( -a , MIN );  
      }
      now = mou;
    }
    cout << MAX << " " << MIN << endl;
  }
  return 0;
}


