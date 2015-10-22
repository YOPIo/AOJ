#include <iostream>
#include <algorithm>

#define MAX 100002

using namespace std;

int memo[MAX];

int main(void){

  int n;
  cin >> n;
  while(n--){
    int a, b;
    cin >> a >> b;
    memo[a]++;
    memo[b + 1]--;
  }
  int now = 0, ans = 0;
  for(int i = 2 ; i < MAX ; i++){
    now += memo[i];
    if(now >= i - 1) ans = i - 1;
  }
  cout << ans << endl;

  return 0;
}


