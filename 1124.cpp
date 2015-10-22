#include <iostream>

using namespace std;

int main(void){

  int n,q;
  while(cin >> n >> q , n + q){

    int dn, day[101] = {0};
    while(n--){
      cin >> dn;
      for(int i = 0 ; i < dn ; i++){
	int a;
	cin >> a;
	day[a]++; 
      }
    }
    int ans = 0, ANS = 0;
    for(int i = 1 ; i <= 100 ; i++){
      if(day[i] >= q && ANS < day[i]){
	ans = i;
	ANS = day[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}


