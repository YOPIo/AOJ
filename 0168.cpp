#include <iostream>

using namespace std;

int dp[31];

void Make_dp(void){

  dp[0] = dp[1] = 1;
  dp[2] = 2;
  for( int i = 3 ; i <= 30 ; i++ )
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

}

int main(void){

  Make_dp();
  int n;
  while( cin >> n , n )
    cout << dp[n]/10/365 + 1 << endl;

  return 0;
}


