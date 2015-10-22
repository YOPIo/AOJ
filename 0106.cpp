#include <iostream>
#include <algorithm>

using namespace std;

int dp[55];
int weight[6] = { 2 ,3 ,5 ,10 ,12 ,15 };
int value[6] = { 380 ,550 ,850 ,1520 ,1870 ,2244 };

void compute(void){
  
  for( int i = 0 ; i < 100 ; i++ ) dp[i] = 99999;;
  dp[0] = 0;
  for( int i = 0 ; i < 6 ; i++ ){
    for( int j = 0 ; j + weight[i] < 55 ; j++ ){
	dp[j + weight[i]] = min( dp[j + weight[i]] , dp[j] + value[i] );
      // 値段はvalueの6種類のみだからづいじそのパターンで計算
    }
  }

}

int main(void){

  compute();

  int n;
  while( cin >> n , n ){
    cout << dp[n/100] << endl;
  }
  return 0;
}


