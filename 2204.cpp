#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int n;
  while( cin >> n, n ){

    int temp = n;
    int res[101] = {0};

    while(n--){
      for( int i = 0 ; i < 5 ; i++ ){
	int s;
	cin >> s;
	res[n] += s;
      }
    }

    sort( res, res + temp );
    cout << res[temp - 1] << " " << res[0] << endl;
  }
  return 0;
}


