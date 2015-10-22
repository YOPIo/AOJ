#include <iostream>
#include <algorithm>
#include <string>

#define MAX 4000

using namespace std;

int dp[MAX + 2][MAX + 2];

int main(void){

  string s,t;
  while(getline(cin, s)){
    getline(cin, t);

    fill(dp[0], dp[MAX + 1] + MAX + 2, 0);

    for(int i = 0 ; i < s.size() ; i++){
      for(int j = 0 ; j < t.size() ; j++){
	if(s[i] == t[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
	else dp[i + 1][j + 1] = 0;
      }
    }
    int ans = 0;
    for(int i = 0 ; i <= s.size() + 1 ; i++){
      for(int j = 0 ; j <= t.size() + 1 ; j++){
	ans = max(dp[i][j], ans);
      }
    }
    cout << ans << endl;
  }
  return 0;
}


