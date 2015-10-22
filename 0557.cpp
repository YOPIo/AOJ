#include <iostream>

using namespace std;

long long dp[101][21];

int main(void){

  int n;
  cin >> n;
  int num[101];
  for( int i = 0 ; i < n ; i++ ){
    cin >> num[i];
  }

  dp[0][num[0]] = 1;

  for( int j = 1 ; j < n ; j++ ){
    for( int i = 0 ; i < 21 ; i++ ){
      if( i + num[j] <= 20 )
	dp[j][i + num[j]] += dp[j - 1][i];
      if( i - num[j] >= 0 )
	dp[j][i - num[j]] += dp[j - 1][i];
    }
  }
    cout << dp[n - 2][num[n - 1]] << endl;
  return 0;
}


