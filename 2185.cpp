#include <iostream>

using namespace std;

int main(void){

  int x,y,h,w,n,N;
  cin >> n;

  while(n--){

    cin >> x >> y >> w >> h;
    cin >> N;
    int X,Y;
    int cnt = 0;
    for( int i = 0 ; i < N ; i++ ){
      cin >> X >> Y;
      if(  x <= X && X <= x + w && y <= Y && Y <= y + h ){
	cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}


