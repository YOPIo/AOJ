#include <iostream>
#define MAX 301

using namespace std;

int dp[MAX];

void Make_dp(void){

  dp[0] = 1;

  for( int i = 1 ; i <= 17 ; i++ ){
    for( int j = 0 ; j < MAX ; j++ ){
      dp[i*i + j] += dp[j];
    }
  }

}

int main(void){

  Make_dp();

  int n;
  while( cin >> n , n )
    cout << dp[n] << endl;

  return 0;
}



