#include <iostream>

using namespace std;

int main(void){

  int N, c, a, n;
  cin >> N;
  while(N--){
    int ans = 0;
    cin >> c >> a >> n;
    while(1){
      if(c >= 1 && a >= 1 && n >= 1){
	c--;
	a--;
	n--;
	ans++;
      }else if(c >= 2 && a >= 1){
	c -= 2;
	a--;
	ans++;
      }else if(c >= 3){
	c -= 3;
	ans++;
      }else break;
    }
    cout << ans << endl;

  }
  return 0;
}


